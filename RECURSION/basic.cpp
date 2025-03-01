#include<bits/stdc++.h>
using namespace std;

//parameterized recursioin]
void fun(int n, int sum){
     if(n<1)return;
     cout<<sum<<endl;
     fun(n-1,sum+n);
}

int fun2(int n){
     if(n==0)return 0;
     return n+fun2(n-1);
}
int main(){
     fun(5,0);

//functional recursion
     cout<<fun2(5);
}