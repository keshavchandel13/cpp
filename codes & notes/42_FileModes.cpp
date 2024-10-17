#include<iostream>
#include<fstream>
using namespace std;
// Various type file modes in c++
// 1) ios::in: Opens the file for reading (input mode).
// 2) ios::out: Opens the file for writing (output mode).
// 3) ios::app: Opens the file for appending data at the end.
// 4) ios::trunc: Truncates the file (i.e., clears existing content when opening for writing).
// 5) ios::ate: Opens the file, and the initial position is set at the end.
// 6) ios::binary: Opens the file in binary mode.
int main(){
    // 3) Appending data at end
    ofstream fout;
    fout.open("42_data.txt",ios::app);
    if(!fout){
        cout<<"error"<<endl;
        return 1;
    }
    fout<<"This is appended data"<<endl;
    fout.close();
    cout<<"data appended"<<endl;


return 0;
}