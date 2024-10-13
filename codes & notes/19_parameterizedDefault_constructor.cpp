// #include<iostream>
// using namespace std;
// class complex{
//   int a,b;
//   public:

//     complex(int , int);
//     void printData(void){
//         cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// complex :: complex(int x,int y){// paramerterized constructor
//    a=x;
//    b=y;
// }
// int main(){
//     // Implicit call
//     complex o1(2,3);
//     o1.printData();

//     //exlpicit call
//     complex o2=complex(6,8);
//     o2.printData();

// return 0;
// }


//Question--> find the distance between two points
#include<iostream>
#include<cmath>
using namespace std;
class point{
   int x,y;
   public:
     friend  double sum(point o1, point o2);
    point(int a, int b){//constructor
        x=a;
        y=b;
    }
    void display(point o1,point o2){
        double  ans=sum(o1,o2);
        cout<<"The distance between point ("<<o1.x<<","<<o1.y<<") and point ("<<o2.x<<","<<o2.y<<") is "<<ans<<endl;
    }
};

double sum(point o1, point o2){
int a=pow((o2.x-o1.x),2);
int b=pow((o2.y-o1.y),2);
return sqrt(a+b);


}


int main(){
point o1(2,3);
point o2(4,5);
o1.display(o1,o2);
return 0;
}
