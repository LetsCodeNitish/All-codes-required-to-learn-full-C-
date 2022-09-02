#include <iostream>
using namespace std;
int main ()
{
    int N, i=1, j, k;
    cin>>N;
    while(i<=N)
    {
        k=1;
        while(k<=N-i+1)
        {
            cout<<" ";
            k++;
        }j=1;
        while(j<=i)
        {
            cout<<j;
        j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<j;
        j--;
        }
        cout<<endl;
        i++;
    }
}