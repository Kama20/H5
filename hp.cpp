#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    string a;
    cin>>a;
    stack<char> kolvo;
    for (int i=0; i<a.size(); i++){
        if (a[i]=='(' || a[i]=='[' || a[i]=='{'){
            kolvo.push(a[i]);
        } else if (a[i]==')') {
            if (kolvo.top()=='('){
                kolvo.pop();
            } else {
                cout<<"no";
                return 0;
            }
        } else if (a[i]==']'){
            if (kolvo.top()=='['){
                kolvo.pop();
            } else {
                cout<<"no";
                return 0;
            }
        } else if (a[i]=='}'){
            if (kolvo.top()=='{'){
                kolvo.pop();
            } else {
                cout<<"no";
                return 0;
            }
        }
    }
    if (kolvo.size()==0)
        cout<<"yes";
    else
        cout<<"no";
}
