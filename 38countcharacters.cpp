#include<iostream>
using namespace std;

int main(){

    char a;
    a = cin.get();
    int count = 0;
    while(a!='$')
    {
        count++;
        a = cin.get();
    }
    cout<<count<<endl;
}