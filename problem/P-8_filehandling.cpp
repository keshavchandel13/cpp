#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream fout("P-8_data.txt");
if(fout){
    // for(int i=1;i<6;i++){
    //     fout<<i*10<<endl;
    // }
    fout<<"this is dummy text";
}
else{
    cout<<"error"<<endl;
}
fout.close();
ifstream fin("P-8_data.txt");
if(fin){
    fin.seekg(-10,ios::end);
    string line;
    while(getline(fin,line)){

    cout<<line<<endl;
    }
    int position = fin.tellg();
    cout<<position;
}
fin.close();
ofstream fout("P-8_data.txt",ios::ate);



return 0;
}