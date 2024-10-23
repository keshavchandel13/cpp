#include<iostream>
#include<fstream>
using namespace std;
// 5)Binary mode
int main(){
    ofstream fout("43_binary.dat",ios::binary);
    if(!fout){
        cout<<"Error"<<endl;
        return 1;
    }
    int a =1223;
    fout.write(reinterpret_cast<char*>(&a),sizeof(a));
    fout.close();
     ifstream fin("43_binary.dat", ios::binary);
    if (!fin) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int num;
    fin.read(reinterpret_cast<char*>(&num), sizeof(num));  // Reading binary data
    fin.close();

    cout << "Number read from file: " << num << endl;
    cout<<"done!"<<endl;
return 0;
}