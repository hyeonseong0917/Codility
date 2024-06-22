// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int solution(string &S) {
    // Implement your solution here
    if(S.empty()){
        return 1;
    }
    stack<char> st;
    int n=S.size();
    for(int i=0;i<n;++i){
        if(S[i]=='('){
            st.push('(');
        }else{
            if(st.empty()){
                return 0;
            }else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        return 1;
    }else{
        return 0;
    }
}
