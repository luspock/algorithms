class Solution {
public:
    int titleToNumber(string s) {
        int n = 0;
        int length = s.size();
        for(int i=0;i<length;++i){
            n += (s[length-1-i]-'A'+1)*pow(26,i);
        }
        return n;
    }
};
