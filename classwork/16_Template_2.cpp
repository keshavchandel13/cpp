#include <iostream>  
#include<string>
using namespace std;  
template<class T, int size>  
class A   
{  
    public:  
    T arr[size];  
    void  insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i+0.5;  
            i++;  
        }  
    }  
    void insertName(){
        for(int i=0;i<size;i++){
            arr[i]="Employee"+to_string(i);
        }
    }
      
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            cout << arr[i] << " ";  
        }
        cout<<endl;  
    }  
};  
int main()  
{  
    A<int,10> t1;  
    A <float,10> t2;
    A <char,5> t3;
    t1.insert();  
    t1.display(); 
    
    t2.insert();  
    t2.display();  

    t3.insertName();
    t3.display();
    return 0;  
}  
