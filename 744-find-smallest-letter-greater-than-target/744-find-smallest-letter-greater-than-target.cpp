class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target=='z')
            return letters[0];
        int low=0, high=letters.size(), mid;
        while(low<high){
            mid=low+(high-low)/2;
            
            if(letters[mid]<=target)
                low=mid+1;
            else
                high=mid;
        }
        return letters[low % letters.size()];;
    }
};