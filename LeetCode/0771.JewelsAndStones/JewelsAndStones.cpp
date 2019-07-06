class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n_S = S.size();
        int n_J = J.size();
        int result=0;
        for(int i=0;i<n_S;++i){
            for(int j=0;j<n_J;++j)
                if(J[j]==S[i])
                    ++result;
        }
        return result;
    }
};
