// PALIDROME STRING
#include<iostream>
#include<string.h>
using namespace std;

bool ispalidrome(string word)
{
    int start=0;
    int end=word.length() -1;
 
    while(start<end)
    {
    if(word[start]!=word[end])
    {
        return false;
    }
    start++;
    end--;

    }
    return true;
 
}
int main()
{
    string word;
    cout<<"Enter  the word"<<endl;
    cin>>word;
    if(ispalidrome(word))
    {
        cout<<"The entered word is palidrome"<<endl;
    }
    else{
        cout<<"it  is not palidrome"<<endl;
    }
  

}