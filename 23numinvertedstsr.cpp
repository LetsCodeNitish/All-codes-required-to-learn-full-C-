#include <iostream>
using namespace std;
int main()
{
    int N, i=1, j;
    cin>>N;
    while(i<=N)
    {   j=1;
        while(j<=N-i+1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}