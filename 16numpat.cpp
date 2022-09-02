#include <iostream>
using namespace std;
int main()
{
    int N, i=1;
    cin>>N;
    while(i<=N)
    {
        int j=1;
        while(j<=N)
        {
            int a = N-j+1;
            cout<<a;
            j=j+1;
        }cout<<endl;
        i = i+1;
    }

}
