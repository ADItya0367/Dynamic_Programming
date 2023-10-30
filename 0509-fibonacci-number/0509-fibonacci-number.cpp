class Solution {
public:
    int fib(int n) {
       int a=0;int b=1;
       int ans;
       
           if(n==0 || n==1) return n;
           for(int i=2;i<=n;i++)
           {
               ans=a+b;
               a=b;
               b=ans;
           } 
           return ans;
    }
};

//Fibonacci number is denoted by f(n) that mainly forms a sequence called fibonacci sequence
//in this sequence each number is the sum of previous two numbers starting from 0 & 1

//SOLUTION 
//the approach is simple

//define a variable to 0 and another variable to 1 
//declare another variable as ans suppose 
// check if the value of n is 0 or 1 if so then return n
//else run a loop from 2 to n such that 
// now store the value of ans =first_variable+second_variable
//equate first_variable to second_variable 
//and second_variable to ans 