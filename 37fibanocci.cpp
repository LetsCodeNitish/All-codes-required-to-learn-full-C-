#include <iostream>
using namespace std ;
int main()
{
    int N, a=-1, b=1, c;
    cin>>N;
    for(int i=0;i<=N;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    
}