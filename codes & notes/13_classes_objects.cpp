#include<iostream>
using namespace std;
class employee{
private:
    int salary=1000,id;


public:
string designation;
int office_time;

void info() ; 
};

void employee :: info()
{
cout<<"The designation is :"<<designation<<endl;
cout<<"The office time is :"<<office_time<<endl;
cout<<"The salary is :"<<salary<<endl;

}

int main(){
 employee ram; 
ram.designation="Senior dev";
ram.office_time=9;
// ram.salary=10000; //This will give error because private can't be accesed directly
ram.info();

 employee keshav; 
keshav.designation="CEO";
keshav.office_time=10;
keshav.info();


return 0;
}