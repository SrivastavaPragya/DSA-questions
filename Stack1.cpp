// reverse a stack using recursion

void reverseStack(stack<int> & input, stack<int> & extra) {
      if (input.size() == 0) {
        return;
      }
// small calculation
int firstElem=input.top();
input.pop();

reverseStack(input,extra);

while (!input.empty()) {
  int top = input.top();
  input.pop();
  extra.push(top);
}
  extra.push(firstElem);

while(!extra.empty()){
  int top = extra.top();
  extra.pop();
  input.push(top);
}
}