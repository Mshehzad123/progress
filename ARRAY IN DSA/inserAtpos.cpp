#include<iostream>
using namespace std;
int main(){
    int n,x,pos;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the lements of array ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position of elemnts ";
    cin>>pos;
    cout<<"enter the element which u want to add";
    cin>>x;
    for (int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    n++;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}