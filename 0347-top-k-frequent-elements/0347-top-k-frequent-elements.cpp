class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> idk;
        
        for(int i=0; i<nums.size();i++)
            idk[nums[i]]++;
        
        multimap<int,int> kdi;
        
        for(auto j=idk.begin(); j!=idk.end();j++)
            kdi.insert({j->second, j->first});
        
        for(auto i=kdi.rbegin(); i!=kdi.rend(); i++){
            if(k>0){
                ans.push_back(i->second);
                k--;
            }
        }
        return ans;
    }
};