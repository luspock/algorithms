class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
        int minSize = strs[0].size();
        for(int i=1;i<n;i++){
            int temp = strs[i].size();
            minSize = (temp<minSize?temp:minSize);
        }
        if(minSize==0) return "";
        string output="";
        char temp_char;
        for(int j=0;j<minSize;j++){
            temp_char = strs[0][j];
            for(int i=1;i<n;i++){
                if(temp_char!=strs[i][j])
                    return output;
            }
            output +=temp_char;
        }
        return output;
    }
};