#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}