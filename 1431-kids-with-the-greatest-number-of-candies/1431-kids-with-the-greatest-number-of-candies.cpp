class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> sol;
         int max = *(max_element(candies.begin(), candies.end()));
        for(int i=0; i< candies.size(); i++){
            if((candies[i]+extraCandies)>=max){
                sol.push_back(true);
            }
            else
                sol.push_back(false);
        }
        return sol;
    }
};