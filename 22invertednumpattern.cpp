#include <iostream>
using namespace std;
int main()
{
    int N,j,i=1, k;
    cin>>N;
    while(i<=N)
    {
       
       j=1;
       while(j<=N-i+1)
       {
           cout<<N-i+1;
           j=j+1;
       }
        k = 1;
       while(k<=N-i+1)
       {
           cout<<" ";
           k=k+1;
       }
       cout<<endl;
       i = i+1;
    }

} 