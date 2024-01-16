class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea = 0;
        while(left<right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w*h;
            maxArea = max(maxArea, area);
            
            if(height[left] < height[right]) 
                left++;
            else if(height[left] > height[right]) 
                right--;
            else {
                left++;
                right--;
            }
        }
        return maxArea;
    }
};