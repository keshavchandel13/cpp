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
    int position = fin.tellg();
    while(getline(fin,line)){

    cout<<line<<endl;
    }
    cout<<position;
}
fin.close();
ofstream f("P-8_data.txt",ios::app);
f<<" added text";
f.close();


return 0;
}