#include <iostream>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    for(i=2;i<=N;i++)
    {   int isprime = 0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=1;
            }
            
        }
            if(isprime==0)
            {
                cout<<i;
            }
           
        
        
    }
}