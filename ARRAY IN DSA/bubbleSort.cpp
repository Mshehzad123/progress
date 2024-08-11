#include<iostream>
using namespace std;
    int n=4;
    int arr[4]={1,4,3,2};
void bublle(){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}
void print(){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    print();
    bublle();
    print();

}