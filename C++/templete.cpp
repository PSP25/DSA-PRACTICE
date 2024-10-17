#include<bits/stdc++.h>
using namespace std;
int helper(int a,int b){
    if(a==b){
        return a;
    }
    return a+helper(a+1,b);
}
int main(){
    int a=20;
    int b=20;
    cout<<helper(a,b)<<endl;
}