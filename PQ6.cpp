//max inbuilt priority queue


#include <iostream>
using namespace std;
#include<queue>

int main(){
  //  priority_queue <int> pq;... use this in max priority queue
  // use this in min priority queue
      priority_queue <int,vector<int> ,greater<int>>pq;
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    pq.push(7);
    pq.push(8);
    pq.push(9);

    cout<<"Size:"<<pq.size()<<endl;
    cout<<"Top:"<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

}
