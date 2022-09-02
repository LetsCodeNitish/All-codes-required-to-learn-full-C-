#include <iostream>
using namespace std;
int main()
{
    int N, i=1, pre, cur, count=0;
    cin>>N>>pre;
    bool ha = true;
    
    while(i<N)
    {
        cin>>cur;
        if(cur<pre)
        {
           ha=true;
           count++;
           
        }
        else if(cur>pre)
        {
            ha=false;
            break;
            
        }
        else
        {
            ha=false;
            break;
            
        }
        i++;
        pre=cur;
        
        
        
    }
    while(i<N-count)
    {
        cin>>cur;
        if(cur>pre)
        {
            ha = true;
        }
        else{
            ha=false;
        }
        i++;
        cur=pre;

    }
    
    
    if(ha==1)
    {
    cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}