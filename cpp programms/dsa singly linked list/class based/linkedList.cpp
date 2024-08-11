#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
for (int i=0;i<=10;i++){
    Node* n = new Node(i);
cout<<n->data;
}
return 0 ;

}