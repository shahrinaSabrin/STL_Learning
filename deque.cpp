#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    deque<int>dec;
    while(q--)
    {
        
        int n,p,d;
        long long int x;
        cin>>n;
        if(n==0)
        {   
            cin>>d>>x;
            if(d==0)
            dec.push_front(x);
            else
            dec.push_back(x);  
            
        }
        /*for(int i=0;i<dec.size();i++)
        cout<<dec[i]<<" ";
        cout<<endl;
        */

        if(n==2)
        {
            cin>>d;
            if(d==0)
            dec.pop_front();
            else
            dec.pop_back();
        }
        /*for(int i=0;i<dec.size();i++)
        cout<<dec[i]<<" ";
        cout<<endl;
        */
        if(n==1)
        {
            cin>>p;
            cout<<dec[p]<<endl;
        }

    }
}