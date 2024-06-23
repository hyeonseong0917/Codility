// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
int solution(vector<int> &A) {
    // Implement your solution here
    // -++
    //--+
    // ---
    sort(A.begin(),A.end());
    int minus_num=0;
    int n=A.size();
    for(int i=0;i<n;++i){
        if(A[i]<0){
            ++minus_num;
        }
    }
    int ans=1;
    if(minus_num==n){
        ans=A[n-1]*A[n-2]*A[n-3];
    }else{
        if(minus_num==1){
            ans=A[n-1]*A[n-2]*A[n-3];
        }else{
            ans=max(A[n-1]*A[n-2]*A[n-3],A[0]*A[1]*A[n-1]);
        }
    }
    return ans;
}
