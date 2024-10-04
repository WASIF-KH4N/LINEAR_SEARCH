#include <iostream>
using namespace std;
int main(){
    int arr[5],n,x,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched: ";
    cin>>x;
    for(int i=0;i<n;i++){
         if (arr[i]==x){
        cout<<"Element found at index: "<<i;
    
       }
  
    }
   
if (i==n){
        cout<<"Element not found in array";
   }
  return 0;

 }
