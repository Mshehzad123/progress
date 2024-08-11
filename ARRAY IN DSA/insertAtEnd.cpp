#include<iostream>
using namespace std;
int main(){
   int n,x;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++){
    cin>>arr[i];
   }
   cin>>x;
   arr[n]=x;
   n++;
   for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
   return 0;
}