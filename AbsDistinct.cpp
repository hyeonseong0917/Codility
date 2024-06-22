// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <map>
int solution(vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    int ans=0;
    map<int,int> m;
    for(int i=0;i<n;++i){
        if(A[i]<0){
            A[i]*=-1;
        }
        if(!m[A[i]]){
            ++ans;
            m[A[i]]=1;
        }
    }
    return ans;
}
