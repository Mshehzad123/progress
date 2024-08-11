#include<iostream>
using namespace std;
int arr[5]={9,4,6,2,1},n=5;
int main(){
    for (int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while (j>=0&&temp<arr[j])
        {
            /* code */
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}