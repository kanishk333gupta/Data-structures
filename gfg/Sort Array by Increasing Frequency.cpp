//https://leetcode.com/problems/sort-array-by-increasing-frequency/

class Solution {
public:
    static bool comp( pair<int,int> a , pair<int,int> b ){
            return ((a.second==b.second)?a>b:a.second<b.second);
        }
    vector<int> frequencySort(vector<int>& nums) {
 	unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i = 0 ; i< nums.size();i++) mp[nums[i]]++;
        for(auto i:mp) v.push_back(i);
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(int i =0 ; i<v.size() ; i++){
            int k = v[i].second;
            while(k--) ans.push_back(v[i].first);
        }
        return ans;
        
	
	// map<int,int>mp;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     mp[nums[i]]++;
        // }
        // // priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>minh;
        // priority_queue<pair<int,int>>minh;
        // for(auto i = mp.begin() ; i != mp.end() ; i++){
        //     minh.push({-i->second,i->first});
        // }
        // vector<int>v;
        // while(!minh.empty()){
        //     int freq = minh.top().first;
        //     int ele = minh.top().second;
        //     for(int i = 0 ; i < abs(freq) ; i++){
        //         v.push_back(ele);
        //     }minh.pop();
        // }//reverse(v.begin(),v.end());
        // return v;

       
    }
};