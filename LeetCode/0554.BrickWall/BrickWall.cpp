class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int length = 0;
        for(int i=0;i<wall[0].size();++i){
            length+=wall[0][i];
        }
        if(length==1) return wall.size();
        unordered_map<int, int> record;
        for(auto row:wall){
            int n_row = row.size();
            if(n_row==1) continue;
            int integral[n_row-1]={0};
            integral[0] = row[0];
            record[integral[0]-1]+=1;
            for(int i=1;i<n_row-1;++i){
                integral[i] = integral[i-1]+row[i];
                record[integral[i]-1]+=1;
            }
        }
        int max=0;
        for(auto it=record.begin();it!=record.end();++it){
            if(it->second>max){
                max=it->second;
            }
        }
        return wall.size()-max;
    }
};
