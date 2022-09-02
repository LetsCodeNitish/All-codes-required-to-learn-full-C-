#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int j=1;
        while(j<=N)
        {
            char ch = 'A'+i +j-2;
            cout<<ch;
            j=j+1;
        }i=i+1;
        cout<<endl;
    } 
    
    
}