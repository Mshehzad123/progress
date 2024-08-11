#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the size of array";
    cin>>n;
cout<<"enter the elements of array";
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the elements which u want to search ";
cin>>x;
bool isbool = false;
for (int i=0;i<n;i++){
    if (arr[i]==x){
        cout<<"nmbr is found ";
    isbool=true;
    break;
    }
        

}
if (!isbool){
    cout<<"nop";
}
    
return 0;
}