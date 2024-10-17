#include<bits/stdc++.h>
using namespace std;
void selection(vector<int> &arr,int n){
     int mini=arr[0];
     for(int i=0;i<n-1;i++){
          int index=i;
          for(int j=i+1;j<n;j++){
               if(arr[j]<mini){
                    mini=arr[j];
                    index=j;
               }
          }
          swap(arr[i],arr[index]);
          mini=arr[i+1];
     }
}
int main(){
  vector<int> arr={5,4,3,2,1,6,7,8,9,10};
  selection(arr,10);
  for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
