#include<bits/stdc++.h>
using namespace std;
int reverse_array(int arr[],int n)
{

   int s = 0;
   int e = n-1;
   
   while(s < e) {
      swap(arr[s],arr[e]);
       
       s += 1;
       e -=1;
   }
 }
int main(){
   int arr[] = {10,20,30,40,50,60,70,80,90,100};
   int n = sizeof(arr)/sizeof(int);

for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
}
  cout<<endl;
  reverse_array(arr,n);
  
 for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
}
 

      return 0;
   } 
   
