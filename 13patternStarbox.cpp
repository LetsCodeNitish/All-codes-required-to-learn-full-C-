#include<iostream>
using namespace std;


int main(){
    
    int N, i=1, j;
    cin>>N;
    while(i<=N)
    {
        j=1;
        while(j<=i)
        {
            char ch = 'A'+N-1+i-1+j-1;
            cout<<ch;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
    
}

