class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[] = new int[2];
        int diff,l = 0;
        for(int i = 0;i<nums.length-1;i++){
            diff = target-nums[i];
            for(int k = i+1;k<nums.length;k++){
                if(nums[k] == diff){
                    arr[0] = i;
                    arr[1] = k;
                    l = 1;
                    break;
                }
            }
            if(l==1)
                break;
        }
        return arr;
    }
}