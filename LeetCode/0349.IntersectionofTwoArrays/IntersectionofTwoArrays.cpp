class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1;
        std::unordered_set<int> set2;
        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            set1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            set2.insert(nums2[i]);
        }
        int length1 = set1.size();
        int length2 = set2.size();
        if(length1<length2){
            for(auto itr = set1.begin(); itr != set1.end(); ++itr){
                if(set2.count(*itr))
                    result.push_back(*itr);
            }
        }
        else{
            for(auto itr = set2.begin(); itr != set2.end(); ++itr){
                if(set1.count(*itr))
                    result.push_back(*itr);
            }
        }
        return result;
    }
};
