#include<iostream>
using namespace std;
int main(){
    int n ,x;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element which u want to insert";
    cin>>x;
    for (int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    n++;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}