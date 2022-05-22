class Solution {
public:
    int getNext(int n){
        int r=0, snum=0; 
        while(n>0){
            r=n%10;
            snum+=r*r;
            n/=10;
        }
        return snum;
    }
    bool isHappy(int n) {
        set<int> s;
        while(s.find(n) == s.end() && n!=1){
                s.insert(n);
                n=getNext(n);
        }
        return n==1;
    }
};