#include <iostream>
using namespace std;

void printTable(int start, int end, int step) 
{
    
    for(;start<=end;start=start+step)
    {
        int c = ((start-32)*5)/9;
        cout<<c<<"\t";
    }
    
}
int main()
{
    int s, e, w;
    cin>>s>>e>>w;
    printTable(s,e,w);
}


