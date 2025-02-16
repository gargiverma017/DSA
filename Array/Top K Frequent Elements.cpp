class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;

        //store in map form to get frequency
        for(auto i:nums){
            mp[i]++;
        }

        // Convert map to vector of pairs so that we can sort acc to freqency
        vector<pair<int, int>> vec(mp.begin(), mp.end());

        // Sort by frequency in descending order
        sort(vec.begin(), vec.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Sort by frequency
        });
        
        //create a vector to store vec.first
        vector<int>v;
        for(int i=0;i<k;i++){
            v.push_back(vec[i].first);
        }  
        return v;  
    }
    
};
