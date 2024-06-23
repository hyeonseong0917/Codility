// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <stack>
int solution(vector<int> &A, vector<int> &B) {
    // Implement your solution here
    int n=A.size();
    stack<int> st;
    int cnt=0;
    for(int i=0;i<n;++i){
        if(B[i]==1){
            st.push(i);
        }else{
            while(!st.empty()){
                int cur_num=st.top();
                if(A[cur_num]<A[i]){
                    st.pop();
                    ++cnt;
                }else{
                    ++cnt;
                    break;
                }
            }
        }
    }
    return n-cnt;
}
