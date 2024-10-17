#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin; // ifstream is used tob read the data in the file
    fin.open("40_data.txt",ios::in);
    if(!fin){
        cout<<"Error in openning file";
        return 1;
    }
    string lines;
    while(getline(fin,lines)){
        cout<<lines<<endl;
    }
    fin.close();
return 0;
}