#include<iostream>
using namespace std;
int main (){
    int n=4;
    int m=6;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if(j==1 || j==6 || i==1 || i==4){
                cout<<"#";
            }else{
            	cout<<" ";
			}
        }
        cout<<endl;
    }
    return 0;
}