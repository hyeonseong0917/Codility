// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
int solution(vector<int> &A) {
    // Implement your solution here
    sort(A.begin(),A.end());
    int ans=1;
    int n=A.size();
    for(int i=0;i<n;++i){
        if(A[i]==ans){
            ++ans;
            continue;
        } 
        if(A[i]>ans){
            break;
        }
    }
    return ans;
}