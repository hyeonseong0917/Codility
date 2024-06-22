// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <map>
#include <algorithm>
int solution(vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    sort(A.begin(),A.end());
    int idx=0;
    int ans=0;
    while(idx<n){
        int cnt=1;
        int tmp_idx=idx;
        for(int i=tmp_idx+1;i<n;++i){
            if(A[i]==A[idx]){
                ++cnt;
                idx=i;
            }else{
                idx=i;
                break;
            }
        }
        if(cnt%2==1){
            ans=A[tmp_idx];
            break;
        }
    }
    return ans;
    
    return ans;
    
}
