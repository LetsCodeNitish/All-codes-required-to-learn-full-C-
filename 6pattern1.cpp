#include <iostream>
using namespace std;
int main()
{
    int N, i = 1;
    cin >> N;
    while(i<=N)
    {
        int j = 1;
        while(j<=i)
        {
        cout<<j<<" ";
        j=j+1; 
        }
        cout<<endl;
        i = i+1;
    }
}