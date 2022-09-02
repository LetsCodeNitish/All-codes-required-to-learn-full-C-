#include<iostream>
using namespace std;
bool checkMember(int n)
{
    int a=0, b=1, c = 0;
    bool p = false;
    
    if(n == 0 || n == 1) {
        return true;
    }
    for(int i =1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            return true;
        }
    }
   
    return false;

}
int main()
{
    int n;
    cin>>n;
    cout<<checkMember(n);
}