#include <iostream>
using namespace std;
int main ()
{
    int N, i, j, k;
    cin>>N;
    while(i<=N)
    {
        k=1;
        while(k<=N-i+1)
        {
            cout<<" ";
            k++;
        }
        while(j<=i)
        {
            cout<<j;
        j++;
        }cout<<endl;
        i++;
    }
}