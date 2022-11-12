#include<bits/stdc++.h>
using namespace std;
int print_MAX_array(int arr[],int n)
{
  int cs = 0;
  int largest  = 0;
  for(int i=0; i<n; i++){
   cs = cs + arr[i];
   if(cs < 0){
      cs = 0;
   }
  largest  = max(largest,cs);
  }
  return largest;
}
int main(){
   int arr[] = {10,20,-2,20,50,60,-50,10};
   int n = sizeof(arr)/sizeof(int);
 
       cout<<print_MAX_array(arr,n)<<endl;
      return 0;
   } 
   
