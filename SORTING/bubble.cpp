#include<bits/stdc++.h>
using namespace std;
 void bubblesort(vector<int> &arr,int n){
     bool swapped=false;
     for(int i=n-1;i>0;i--){
          for(int j=0;j<i;j++){
               if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);
                         swapped=true;//for optimization
               }

          }
     }
 }

int main(){
  vector<int> arr={5,4,3,2,1,6,7,8,9,10};
  bubblesort(arr,10);
  for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";
  }
  return 0;
}
