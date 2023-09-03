// max priority queue

#include <vector>

class PriorityQueue {
    // Declare the data members here
    vector<int> pq;

public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] > pq[parentIndex]) { // Change < to >
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }
            childIndex = parentIndex;
        }
    }

    int getMax() {
        // Implement the getMax() function here
        if (isEmpty()) { // Change isEmpty()==0 to isEmpty()
            return 0;
        }
        return pq[0];
    }

    int removeMax() {

	if(isEmpty()) {
			return 0;		// Priority Queue is empty
		}
		int ans = pq[0];
		pq[0] = pq[pq.size() - 1];
		pq.pop_back();

		// down-heapify

		int parentIndex = 0;
		int leftChildIndex = 2 * parentIndex + 1;
		int rightChildIndx = 2 * parentIndex + 2;
	
		while(leftChildIndex < pq.size()) {
			int maxIndex = parentIndex;
			if(pq[maxIndex] < pq[leftChildIndex]) {
				maxIndex = leftChildIndex;
			}
			if(rightChildIndx < pq.size() && pq[rightChildIndx] > pq[maxIndex]) {
				maxIndex = rightChildIndx;
			}
			if(maxIndex == parentIndex) {
				break;
			}
			int temp = pq[maxIndex];
			pq[maxIndex] = pq[parentIndex];
			pq[parentIndex] = temp;
		
			parentIndex = maxIndex;
			leftChildIndex = 2 * parentIndex + 1;
			rightChildIndx = 2 * parentIndex + 2;

    }
    	return ans;
    }

    int getSize() {
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size() == 0; // Add parentheses to pq.size()
    }
};
