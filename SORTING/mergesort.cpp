#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int start,int end,int mid){
     int p1=start;
     int p2=mid+1;
     vector<int> temp;
     while(p1<=mid && p2<=end){
          if(arr[p1]<arr[p2]){
               temp.push_back(arr[p1]);
               p1++;
          }
          else{
               temp.push_back(arr[p2]);
               p2++;
          }
     }
     while(p1<=mid){
          temp.push_back(arr[p1]);
          p1++;
     }
     while(p2<=end){
          temp.push_back(arr[p2]);
          p2++;
     }
     for(int i=start;i<=end;i++){
          arr[i]=temp[i-start];
     }
    
}
void mergesort(vector<int> &arr,int start,int end){
     if(start<end){
          int mid=(start+end)/2;
          mergesort(arr,0,mid);
          mergesort(arr,mid+1,end);
          merge(arr,start,end,mid);
     }
}
int main(){
  vector<int> arr={5,4,3,2,1,6,7,8,9,10};
  mergesort(arr,0,9);
  for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
