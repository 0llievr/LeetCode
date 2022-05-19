class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int cur = 0;
        int left = 0;
        int right = height.size()-1;
        
        //work outside in
        while(left!=right){
            //the shortest wall hold in the water
            if(height[left]>height[right]){
                cur = height[right]*(right-left);
                if(max<cur){ max=cur; }
                right--;
            }else{
                cur = height[left]*(right-left);
                if(max<cur){max=cur;}
                left++;
            }
        }
        
        return max;
        
    }
};