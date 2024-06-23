// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <cmath>
int solution(vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    vector<int> psum(n,0);
    psum[0]=A[0];
    for(int i=1;i<n;++i){
        psum[i]=psum[i-1]+A[i];
    }
    int ans=100000000+1;
    for(int i=1;i<n;++i){
        ans=min(ans,abs(psum[i-1]-psum[n-1]+psum[i-1]));
    }
    return ans;
}
