int any = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        int nd = d.size();
        string res = "";
        string ret = "";
        for(int i=0;i<nd;i++){
            ret = findLongestWord_single(s,d[i]);
            if(ret!=""){
                int res_size = res.size();
                int ret_size = d[i].size();
                if(res_size<ret_size)
                    res = d[i];
                else if(res_size==ret_size)
                    res = res <= d[i] ? res : d[i];
            }
        }
        return res;
    }
    
    string findLongestWord_single(string s, string d){
        int nd = d.size();
        if(nd==0) return "";
        int ns = s.size();
        if(nd>ns) return "";
        // bidirectional search
        int d_head=0, s_head=0;
        int d_rear=nd-1, s_rear=ns-1;
        while(1){
            if(d[d_head]==s[s_head]) {
                ++d_head;
                };
            if(d[d_rear]==s[s_rear]) {
                --d_rear;
            };
            if(d_head>d_rear){
                if(s_head<=s_rear)
                    return d;
                else
                    return "";                
            }
            else{
                if(s_head>s_rear)
                    return "";
                else{
                    s_head++;
                    s_rear--;
                }
            } 
        }
    }
};