// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // Implement your solution here
    if(A.empty()) return 0;
    int ans=0;
    int n=A.size();
    int cur_time=-1;
    for(int i=0;i<n;++i){
        if(cur_time<A[i]){
            ++ans;
            cur_time=B[i];
        }
    }
    return ans;
}
