#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse(string w){
    stack<char> s;
    string r = "";
    for (int i =0; i< w.length(); i++)
        s.push(w[i]);
    
    while(!s.empty()){
        r+= s.top();
        s.pop;
    }
    return r;
}
bool is Palindrome
