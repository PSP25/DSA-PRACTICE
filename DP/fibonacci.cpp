#include<bits/stdc++.h>
using namespace std;

int fibo(int n,vector<int>&dp){
     //if(n<=1)return n;

     // if(dp[n]!=-1)return dp[n]; // memoization
     //return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);

     // tabulation
     dp[0]=0;
     dp[1]=1;

     for(int i=2;i<=n;i++){
          dp[i]=dp[i-1]+dp[i-2];
     }
     return dp[n];
}

int main(){
     int n;
     cout<<"enter n:";
     cin>>n;
     vector<int> dp(n+1,-1);
     cout<<fibo(n,dp)<<endl;
}