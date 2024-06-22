// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // Implement your solution here
    // A<=i<=B, %K==0
    int cnt=0;
    if(A%K!=0){
        A+=(K-A%K);
    }
    if(B%K!=0){
        B-=A%K;
    }
    if(A<=B){
        cnt=B/K-A/K+1;
    }
    return cnt;
}
