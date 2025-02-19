class Solution {
public:

    int maxSubArray(vector<int>& nums) {

        int curS = 0;
        int maxS = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            curS += nums[i];
            maxS = max(curS,maxS);

            if (curS<0){
                curS = 0;
            }
        }
        
        return maxS;
    }
};

// use gpt for full code 
