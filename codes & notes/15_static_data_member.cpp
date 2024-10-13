//Static Data Members--> 1) Static variable 2) static function.

// Static variable
#include<iostream>
using namespace std;
class employee{
    static int count; // declaration of the static variable
    string name,employeeId,address;
    public:
     void addDetails(void);
     void numOfEmployee(void);
     void employeeInfo(void);
};
int employee::count;// declaration of the static variable. Inially value is zero and canbe only changed from here

//function to add the new employee
void employee::addDetails(void)
{
    cout<<"Enter the name of the employee "<<count+1<<endl;
    cin>>name;
    cout<<"Enter the employeeId of the employee "<<count+1<<endl;
    cin>>employeeId;
    cout<<"Enter the address of the employee "<<count+1<<endl;
    cin>>address;
    count++;
}
// Function to count number of objects using 
void employee:: numOfEmployee(void){
    cout<<"The number of the employee is : "<<count;
}

//function to display the employee data
void employee::employeeInfo(void)
{
   
    cout<<"The name of the employee "<<name<<endl;

    cout<<"The employeeId of the employee "<<employeeId<<endl;

    cout<<"The address of the employee "<<address<<endl;
   

}

int main(){
employee ram;
ram.addDetails();


employee keshav;
keshav.addDetails();

employee devin;
devin.addDetails();
ram.employeeInfo();
keshav.employeeInfo();
devin.employeeInfo();
devin.numOfEmployee();

return 0;
}