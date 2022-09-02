#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cin>>N;
    bool divided;
    for(i=2;i<N;i++)
    {
        if(N%i==0)
        {divided = true;}
        
    }
    if(divided)
        {cout<<"Not a Prime Number";}
    else
    {
        cout<<"Its a prime Number";
    }
    
}