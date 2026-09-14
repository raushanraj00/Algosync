class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost_m; 
        for(int i = 0; i<matches.size(); i++){
            int loser  = matches[i][1]; 
            lost_m[loser]++; 
        }

        vector <int> not_lost; 
        vector<int> lost_once; 

        for(int i = 0; i < matches.size(); i++){
            int loser = matches[i][1]; 
            int winner = matches[i][0]; 

            if(lost_m.find(winner)== lost_m.end()){
                not_lost.push_back(winner); 
                lost_m[winner] = 2; 
            }
            if(lost_m[loser] == 1){
                lost_once.push_back(loser); 
            }
            
        }
        sort(begin(lost_once), end(lost_once));
        sort(begin(not_lost), end(not_lost));
        return {not_lost, lost_once}; 
    }
};