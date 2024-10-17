#include<iostream>
#include<fstream>
using namespace std;
// Writing in file
int main(){
    ofstream fout;
    fout.open("39_data.txt",ios::out); // opening file & if not exist it will create a file
    if(!fout){ // Checking the file is opened or not
        cout<<"Error in opening in file"<<endl;
        return 1;
    }
    fout<<"Hello! world"<<endl; // Writing in the file
    fout<<"This is the example of the file writing"<<endl;
    fout.close();
    cout<<"Process completed"<<endl;
return 0;
}