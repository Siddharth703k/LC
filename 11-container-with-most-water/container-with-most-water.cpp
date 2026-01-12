class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int wd=right-left;
            int ht=min(height[left],height[right]);
            int area=wd*ht;
            ans=max(ans,area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};