#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    while(t--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        if(a<b)
        {
            for(int i=a-1; i<b-1; i++)
            {
                if(arr[i] > arr[i+1])
                {
                    sum += arr[i]-arr[i+1];
                }
                //cout<<arr[i]<<" "<<arr[i+1]<<endl;
            }
        }
        else
        {
            for(int i=a-1; i>b-1; i--)
            {
                if(arr[i] > arr[i-1])
                {
                    sum += arr[i]-arr[i-1];
                }
                //cout<<arr[i]<<" "<<arr[i+1]<<endl;
            }
        }
        cout<<sum<<endl;
    }
}
 
int main()
{
    int cases=1;
    //scanf("%d", &cases);
 
 
    solve();
    return 0;
} 