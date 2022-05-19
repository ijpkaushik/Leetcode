class Solution {
public:
    float distance(int x1 , int y1 , int x2 , int y2){
        return pow(abs(pow(abs(x2 - x1) , 2) - pow(abs(y2 - y1) , 2)) , 0.5);
    }
    
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        float minDistance = FLT_MAX;
        int minIndex = -1;
        for(int i = 0 ; i < points.size() ; i++){
            if(x == points[i][0] || y == points[i][1]){
                float currdis = distance(x , y , points[i][0] , points[i][1]);
                if(currdis < minDistance){
                    minDistance = currdis;
                    minIndex = i;
                }
            }
        }
        return minIndex;
    }
};