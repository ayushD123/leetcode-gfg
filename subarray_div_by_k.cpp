class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int cur=0;
        int cnt=0;
       // vector<int> a(nums.size,0);
        map[0]=1;
       // int rem=0;
        for(int i=0;i<nums.size();++i){
            cur+=nums[i];
         int rem=cur%k;
            if(rem<0){  //if remainder is negative then rem=rem+k
                rem=rem+k;
            }
            if(map.find(rem)!=map.end()){
                cnt+=map[rem];
            }
            map[rem]+=1;
        }
        return cnt;
    }
};
