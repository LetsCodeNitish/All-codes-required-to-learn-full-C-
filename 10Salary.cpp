#include<iostream>
using namespace std;

int main() 
{
	int basic, allow;
    char g;
    cin>>basic>>g;
     
    float hra = 0.2*basic, da=0.5*basic, pf=0.11*basic;
    
    if(g=='A')
    {allow = 1700;}
    else if(g=='B')
    {allow = 1500;}
    else
    {allow = 1300;}
   
    int totalSalary = (basic + hra + da + allow - pf);
    cout<<totalSalary;
}
