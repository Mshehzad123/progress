#include<iostream>
using namespace std;
int main(){
    int n,x,pos;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element which u ant to insert";
    cin>>x;
    //insertion atr head;
    // for (int i=n;i>0;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=x;
    // n++;

    //insert at end
    
    // for (int i=0;i<n;i++){
    //     arr[i];
        
    // }
    // arr[n]=x;
    // n++;
    //inser at pos
    cout<<"enter the position where u want to unsert the element ";
    cin>>pos;
    for (int i=n;i>pos-1;i--){
        arr[i]=arr[i+1];

    }
    arr[pos-1]=x;
    n++;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}