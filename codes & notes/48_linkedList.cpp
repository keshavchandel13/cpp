//Linked list in cpp
#include<iostream>
using namespace std;
// Linked list using template
template <class Type>
struct link{
    Type data;
    link *next;
};
template <class Type>
class linnkedList{
    link <Type> *first;
    public:
    linnkedList(){first=NULL;}
    void addItem(Type item);
    void display();
};
template <class Type>
void linnkedList<Type>:: addItem(Type item){
    link <Type> *newlink = new link<Type>; 
    newlink->data = item;
    newlink->next = first;
    first = newlink;
}
template <class Type>
void linnkedList <Type>::display(){
    link<Type> *temp = first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int main(){
    linnkedList<int> s1;
    s1.addItem(20);
    s1.addItem(30);
    s1.addItem(40);
    s1.addItem(50);
    s1.display();


return 0;
}