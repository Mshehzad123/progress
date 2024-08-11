#include<iostream>
using namespace std;
int arr[10],n,x;
int binery(int low,int high){
    
    while (low<=high)
    {
    	int mid= low +(high-low)/2;
        if (arr[mid]==x){
            return mid;
        }
        else if (arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return -1;
}
int main(){
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the elements  of array ";

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the elements which u want to find ";
    cin>>x;
int result = binery(0,n-1);
if (result==-1){
    cout<<"nop ";
}
else{
    cout<<"yeah "<<result<<endl;
}
return 0;
}


