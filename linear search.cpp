#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n, int key){
for(int i=0; i<n; i++){
    if(arr[i]==key){
        return i;
    }
}
  return -1;
}
 
int main(){
  int arr[]={10,15,12,9,6,4,3,10,8};
  int n=sizeof(arr)/sizeof(int);
  int key;
  cin>>key;
  int index = linearsearch(arr,n,key);
  if(index!=-1){
    cout<<key<<" "<<" IS PRESENT ON THE INDEX "<<" "<<index<<endl;
  }
    else
    {
        cout<<"NOT PRESENT IN THE LIST";
    }
  
return 0;
}