#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("41_data.txt");
    if(!fout){
        cout<<"Error"<<endl;
        return 1;
    }
    fout<<"This is the data in the file"<<endl;
    fout.close();
    ifstream fin("41_data.txt");
    if(!fin){
        cout<<"Error"<<endl;
        return 1;
    }
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();

return 0;
}