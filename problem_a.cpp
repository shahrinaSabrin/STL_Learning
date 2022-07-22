#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    vector<int>vec;
    while(q--)
    {
        int n,p;
        long long int x;
        cin>>n;
        if(n==0)
        {
            cin>>x;
            vec.push_back(x);
        }
        if(n==2)
            vec.pop_back();
        if(n==1)
        {
            cin>>p;
            cout<<vec[p]<<endl;
        }

    }
}