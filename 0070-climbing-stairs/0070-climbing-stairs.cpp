class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int curr;
        int first=1;
        int second=2;

        for(int i=3;i<=n;i++)
        {
            curr=first+second;
            first=second;
            second=curr;
        }
        return curr;
    }
};
// in this question we are given with the value of n
// here n is the top of stairs where we have to reach 
// we can climb according to this condition
///////--we can take one one step
///////--we can also take 2 step at a time 
// we have to return the total numbe rof steps that we should take to reach total n 