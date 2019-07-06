class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> maillist;
        for(string email:emails){
            bool end_name = false;
            bool start_domain = false;
            string name = "";
            string domain = "";
            for(int i=0;i<email.size();i++){
                if(end_name==false){
                    if(email[i]=='+')
                        end_name=true;
                    else if(email[i]=='@'){
                        end_name=true;
                        start_domain=true;
                    }  
                    else{
                        if(email[i]!='.')
                            name+=email[i];
                    }
                }
                else{
                    if(start_domain==false){
                        if(email[i]=='@') start_domain=true;
                    }
                    else{
                        domain +=email[i];
                    }
                }
            }
            name+="@"+domain;
            maillist.insert(name);
        }
        return maillist.size();
    }
};