#include<iostream>

using namespace std;
int main()
{
    int binary, temp, decimal=0, remainder, b=1, a=0;
    cin>>binary;
    for(binary; binary>0; binary=binary/10, a++)
    {
        remainder = binary%10;
        if(a==0)
        {
            b=1;
        }
        else
        {
            b=b*2;
        }
        decimal = decimal + remainder*b;
    }
    cout<<"The decimal number is:"<<decimal;
}