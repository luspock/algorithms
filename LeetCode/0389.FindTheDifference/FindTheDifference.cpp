class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0;
        int n=s.length();
        int sum=0;
        while(i<n){
            sum += s[i]-t[i];
            ++i;
        }
        sum-=t[i];
        return (char)(-sum);
    }
};
