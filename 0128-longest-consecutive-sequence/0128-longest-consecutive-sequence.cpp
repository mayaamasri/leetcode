class Solution {
public: 
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 1;

        for (int num : nums) {
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentStreak++;
                }

                maxLength = max(maxLength, currentStreak);
            }
        }
        return maxLength;
    }
};