#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key){

for(int i=0; i<n; i++){
	// check if the element is match with the key
	if(arr[i]==key){
		return i;
	}
}
   // if not present out of the loop 
   return -1;
 }
   int main(){
   	 
   	 int arr[]={1,2,3,4,5,6,7,8,9,0};
   	 int n=sizeof(arr)/sizeof(int);
   	 
   	 int key;
   	 cin>>key;
   	 
   	 int index = linearsearch(arr,n,key);
   	 if(index!=-1){
   	 	cout<<key<<" key is found at "<<index<<endl;
   	 }
   	 	else{
   	 		
   	 		cout<<key<<" key is not found !! "<< endl;
   	 	}
   	 	
   	 
   	 return 0;
   	
   }