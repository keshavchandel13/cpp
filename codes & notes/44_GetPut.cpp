#include<iostream>
#include<fstream>
using namespace std;
int main(){
string str ="This is  dummy text";

// Put() function
ofstream outfile;
outfile.open("44_data.txt");
for(int i=0;i<str.size();i++){
    outfile.put(str[i]);
}
cout<<"File written"<<endl;

outfile.close();
// Get() function
ifstream infile;
infile.open("44_data.txt");
char c;
while(infile){
    infile.get(c);
    cout<<c;
}
      // OR
// cout << infile.rdbuf();
infile.close();
return 0;
}