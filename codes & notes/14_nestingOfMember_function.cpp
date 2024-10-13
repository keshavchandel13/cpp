#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public:
      void read(void);
      void check_binary(void);
      void ones_complement(void);
      void display(void);
};
void binary:: read(void)
{
    cout<<"Enter the number you want to check:"<<endl;
    cin>>s;
}
void binary:: check_binary(void)
{
   
  for(int i=0;i<s.length();i++)
  {
    if(s.at(i)!='0' && s.at(i)!='1')
    {
        cout<<"This is not binary number"<<endl;
        exit(0);
    } 
  }
        cout<<"this is a binary number"<<endl;
}
void binary:: ones_complement(void){
     check_binary();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {

            s.at(i)='1';
        }
        else if(s.at(i)=='1')
        {
        
            s.at(i)='0';
        }
    }
}
void binary:: display(void){
  cout<<"Displaying The Ones Complemet Fumction"<<endl;
  cout<<s<<endl;    
}
int main(){
binary b;
b.read();

b.ones_complement();
b.display();

return 0;
}