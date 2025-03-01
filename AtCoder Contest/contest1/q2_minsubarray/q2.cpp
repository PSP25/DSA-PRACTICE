#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  unordered_map<int,int>index;
  int mini=INT_MAX;
  bool found=false;
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(index.count(arr[i])){
     mini=min(mini,i-index[arr[i]]+1); 
     found=true;
    }
    index[arr[i]]=i;
  }
  cout<<(found ? mini : -1)<<endl;
  return 0;
}
