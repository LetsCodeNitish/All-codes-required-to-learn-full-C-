#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1; i<=N ;i++)
    {   int a = 2*N;
         int k = 1;
        for(int j=1; j<=a;j++)
        {
            
            if(j<=N)
            {
                cout<<j;
            }
            else if(N<j<=a)
            {
                for(;k<=N;k++)
                cout<<j-k;
            }
        
        }
        cout<<endl;
    }

     

}