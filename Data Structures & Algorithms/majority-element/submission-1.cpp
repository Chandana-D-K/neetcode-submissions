class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=0;
       int ele;
       for(int i=0;i<nums.size();i++){
        if(count==0){
            ele=nums[i];
            count=1;
        }
        if(ele==nums[i]){
            count++;
        }
        else{
            count--;
        }
       }
       int count1=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==ele){
            count1++;
        }
       }
       if(count1>(nums.size()/2)){
        return ele;
       }
       return -1;
    }
};