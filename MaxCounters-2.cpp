// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    vector<int> ans(N,0);
    int max_num=0;
    int max_cnt=0;
    for(int i=0;i<n;++i){
        if(A[i]==N+1){
            max_num=max_cnt;
        }else{
            if(ans[A[i]-1]<max_num){
                ans[A[i]-1]=max_num;
            }
            ++ans[A[i]-1];
            max_cnt=max(max_cnt,ans[A[i]-1]);
        }
    }
    for(int i=0;i<N;++i){
        if(ans[i]<max_num){
            ans[i]=max_num;
        }
    }
    return ans;
}