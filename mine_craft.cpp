#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int p,q;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(m--)
    {
        
        cin>>p>>q;
        int count=0,dif;
        
        if(p<q)
        {
            for(int i=p-1;i<q-1;i++)
            {
                dif= arr[i]-arr[i+1];
                if(dif>0)
                    count+=dif;
            }
        }
        else if(p>q)
        {
            for(int i=p-1;i<q-1;i++)
            {
                dif= arr[i]-arr[i+1];
                //cout<<dif<<endl;
                if(dif<0)
                    count+=abs(dif);
            }
        }
        cout<<count<<endl;
      
    }
}