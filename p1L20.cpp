#include <iostream>
#include <stack>
using namespace std;
/*
Here we are focusing on using stacks to now use the functions:
pop() 
push()
size()
swap()

without making the actual functions
*/
int main(){
    stack<int> s; // declaring an empty stack to hold integers
    stack<int> t; // declaring an empty stack to hold integers
    // we can't initialize a stack with elements, ie. stack<int> s={1,2,3}
    // we can also NOT traverse stacsks as vectors, for example for (auto e: s) cout << e<< " ";
    
    // adding elements to stack. 
    s.push(2);
    s.push(4);
    s.push(8);
    s.push(16);
    cout << "The current size of the stack: "<< endl;
    cout << s.size()<< endl;
    s.pop();
    cout << s.size()<< endl;
    cout << s.top()<< endl; // returns the top most element of 
    // the stack without removing it from the stack
    cout << "The current size of the stack: "<< endl;
    cout << s.size()<< endl;

/*
Emptying the stack using a while loop
*/
    while (!s.empty())
        s.pop();
    cout << "The current size of the stack: "<< endl;
    cout << s.size()<< endl;
    cout <<"is the stack empty?: "<< s.empty()<< endl;// returns 1 for true

/*
Swapping elements of two stacks, can be done using 
stack of arbitrary sizes
*/
    s.push(2);
    s.push(3);
    s.swap(t);
    cout<< s.top()<< endl;
    cout << t.top()<< endl;
    
    return 0;
}
