class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>vect;
        vect.push_back({1});
        for(int i=1;i<n;i++)
        {
            vector<int>a;
            a.push_back(1);
            for(int j=1;j<=i-1;j++)
            {
               a.push_back(vect[i-1][j-1]+vect[i-1][j]);
            }
            a.push_back(1);
            vect.push_back(a);
            
        }
        return vect;
    }
};
//we are given an integer numRows of Pascal's Triangle
//in pascal triangle each number is the sum of two upper numbers
//



// after solving this you will find a catch that , if you are not using vector of vector then it will show error telling subscripted value is not an array,pointer , hence use vector of vector.