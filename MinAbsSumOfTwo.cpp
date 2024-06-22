// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
#include <cmath>
int solution(vector<int> &A) {
    // Implement your solution here
    sort(A.begin(),A.end());
    int n=A.size();
    
    int L=0, R=n-1;
    int ans=2000000001;
    while(L<=R){
        int cur_num=abs(A[R]+A[L]);
        ans=min(ans,cur_num);
        if(abs(A[L])<=abs(A[R])){
            --R;
        }else{
            ++L;
        }
    }
    return ans;
}
