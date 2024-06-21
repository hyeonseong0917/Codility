// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, int M, vector<int> &A) {
    // Implement your solution here
    int n=A.size();
    int sum=0;
    int max_num=-1;
    for(int i=0;i<n;++i){
        sum+=A[i];
        max_num=max(max_num,A[i]);
    }
    int ans=1000000000+1;
    if(K>=n){
        return max_num;
    }else{
        int L=max_num;
        int R=sum;
        while(L<=R){
            int mid=(L+R)/2;
            // 최대 구간 합이 mid
            int block_cnt=1;
            int cur_sum=0;
            bool flag=0;
            for(int i=0;i<n;++i){
                if(cur_sum+A[i]>mid){
                    ++block_cnt;
                    cur_sum=A[i];
                }else{
                    cur_sum+=A[i];
                }
            }
            if(block_cnt>K){
                flag=1;
            }
            if(flag){
                L=mid+1;
            }else{
                R=mid-1;
                ans=min(ans,mid);
            }
        }
    }
    return ans;
}
