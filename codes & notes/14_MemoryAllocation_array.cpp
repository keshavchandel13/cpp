//Memory allocation using array
#include<iostream>
using namespace std;
class shop{
    int itemId[100];//Memory allocation using array
    int itemPrice[100];
    int counter;
    public:
     void itemCounter(void){
        counter=0;
     }
     void setPrice(void);
     void getPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter the Item Id of the item: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the Item Price of the item: "<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop:: getPrice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The id of the item "<<i+1<<" is "<<itemId[i]<<" and the price is "<<itemPrice[i]<<endl;
    }
}
int main(){
    int num;
    shop a;
    a.itemCounter();
    cout<<"Enter the number of the items you want to add"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
      a.setPrice();
    }
    a.getPrice();



return 0;
}