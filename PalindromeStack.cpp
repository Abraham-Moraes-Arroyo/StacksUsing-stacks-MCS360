
#include<iostream>
#include<stack>
#include<string>

using namespace std;
// here we are going to be reversing the string that is set, NOT taking user input
string reverse(string w){
     stack<char> s;
     string r = "";

     for (int i = 0; i < w.length(); i++)
         s.push(w[i]);

     while (!s.empty()){
           r+= s.top();
           s.pop();
     }
     return r;  
}         

bool isPalindrome(string w){
     stack<char> s;
     for (int i = 0; i < w.length(); i++)
         s.push(w[i]);
     for (int i = 0; i < w.length(); i++){
         if (w[i] != s.top())
            return 0;
         s.pop();
     }   
     return 1; 
}
// this is the old variation of the calculator 
int evaluate_postfix(string expr){  
    stack<int> s;  
    for (auto ch: expr){
        if(isdigit(ch)){  
            s.push((int)ch - 48); // in ASCII the numbers (digits) start from 48,
                                  // same as ch - '0', since char '0' has ASCII code 48 
        } 
        else{  
            int x = s.top();
            s.pop();  
            int y = s.top();
            s.pop();  
            switch (ch){  
                case '+': s.push(x+y); break;  
                case '-': s.push(x-y); break; 
                case '*': s.push(x*y); break;   
                case '/': s.push(y/x); break;  
            }  
        }  
    }
    int last = s.top();
    s.pop(); 
    return last;  
}  
      


int main(){
    cout << "reversed word: " << reverse("hello world") << endl;
    cout << "is the word a palindrome: " << isPalindrome("rotor") << endl;
    cout << "evaluate postfix expression: " << evaluate_postfix("32+5*") << endl; // (3+2)*5 = 25 in infix
    return 0;
}
