// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/?envType=daily-question&envId=2024-01-04
int minOperations(vector<int>& nums) {
        map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int ans=0;
        for(auto it:freq){
            if(it.second<2)return -1;
            int no_of_times=it.second;
            int mul3=(no_of_times/3);
            int rem3=(no_of_times%3);
            if(rem3==1){
                ans+=mul3+1;
            }else if(rem3==2){
                ans+=mul3+1;
            }
            else{
                ans+=mul3;
            }
        }
        return ans;
    }