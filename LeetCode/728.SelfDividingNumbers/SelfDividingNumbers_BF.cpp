class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> results;
        int n=1;
        if(right<left){
            int temp = 0;
            temp = right;
            right = left;
            left = temp;
        }
        for(unsigned int i=left;i<=right;++i){
            unsigned int s[4];
            int flag =0;
            n = 1;
            unsigned int num = i;
            if(1<=i && i<=9) results.push_back(i);
            else{
                if(1000<=i && i<=9999) n=4;
                else if(100<=i && i<=999) n=3;
                else if(10<=i && i<=99) n=2;
                for(int j=0;j<n;++j){
                    s[j] = num%10;
                    num = num/10;
                    if(s[j]==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==1) continue;
                for(int j=0;j<n;j++){
                    if(i%s[j]!=0){
                        flag=1;
                        break;
                    }
                }
                if(flag==1) continue;
                results.push_back(i);
            }
        }
        return results;
    }
};