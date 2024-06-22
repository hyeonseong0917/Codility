// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    int sum=0;
    int ans=0;
    for(int i=0;i<n;++i){
        if(sum+A[i]>=K){
            sum=0;
            ++ans;
        }else{
            sum+=A[i];
        }
    }
    return ans;
}