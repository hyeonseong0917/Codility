// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    vector<int> ans(N,0);
    int max_num=0;
    for(int i=0;i<n;++i){
        if(A[i]==N+1){
            if(i>0 && A[i-1]==N+1) continue;
            ans.clear();
            ans=vector<int>(N,max_num);
        }else{
            ++ans[A[i]-1];
            max_num=max(max_num,ans[A[i]-1]);
        }
    }
    return ans;
}