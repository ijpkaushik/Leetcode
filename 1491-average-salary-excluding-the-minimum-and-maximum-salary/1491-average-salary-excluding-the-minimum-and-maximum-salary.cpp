class Solution {
public:
    double average(vector<int>& salary) {        
        double mx = DBL_MIN;
        double mn = DBL_MAX;
        double sum = 0;
        
        for(int i=0; i<salary.size(); i++){
            sum+=salary[i];
            if(salary[i]>mx)
                mx=salary[i];
            if(salary[i]<mn)
                mn=salary[i];
        }
        sum=sum-mx-mn;
        
        return sum/(salary.size()-2);;
    }
};