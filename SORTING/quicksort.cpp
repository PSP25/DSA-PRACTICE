#include<bits/stdc++.h>
using namespace std;
int findpos(vector<int> &arr,int start,int end){
     int i=start;
     int j=end;
     int pivot=start;
     while(i<j){
          while(i<end && arr[i]<=arr[pivot]){
               i++;
          }
          while(j>start && arr[j]>arr[pivot]){
               j--;
          }
     }
          swap(arr[start],arr[j]);

     return j;
}
void quicksort(vector<int> &arr,int start,int end,int n){
     if(start<end)
     {int pos=findpos(arr,start,end);
     quicksort(arr,start,pos-1,n);
     quicksort(arr,pos+1,end,n);}
}
int main(){
  vector<int> arr={5,4,3,2,1,6,7,8,9,10};
  quicksort(arr,0,9,10);
  for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
