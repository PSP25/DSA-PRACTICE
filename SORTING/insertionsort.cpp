#include<bits/stdc++.h>
using namespace std;
//check previous elements till you find a smaller element
//till then keep on shifteing the current elements to by one positon
void insertonsort(vector<int> &arr,int n){
     for(int i=1;i<n;i++){
          int key=arr[i];
          int index=i-1;
          while(index>=0 && arr[index]>key){
               arr[index+1]=arr[index];
               index--;
          }
          arr[index+1]=key;
     }
}
int main(){
  vector<int> arr={5,4,3,2,1,6,7,8,9,10};
  insertonsort(arr,10);
  for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
