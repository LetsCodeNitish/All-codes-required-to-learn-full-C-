#include <iostream>
using namespace std;
int main()
{
    int N,j,i=1, k;
    cin>>N;
    while(i<=N)
    {
       k = 1;
       while(k<=N-i)
       {
           cout<<" ";
           k=k+1;
       }
       j=1;
       while(j<=i)
       {
           cout<<"j";
           j=j+1;
       }
       cout<<endl;
       i = i+1;
    }

} 