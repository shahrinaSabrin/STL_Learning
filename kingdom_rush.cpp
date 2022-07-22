#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n,k,p;
        cin>>n>>k>>p;
        vector<long long int>vec(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());

        vector<long long int>::iterator it;
        it= lower_bound(vec.begin(),vec.end(),p);
        long long int posi =it-vec.begin();
        
        vector<long long int>dis_vec(n);
        for(long long int i=0;i!=vec.size();i++)
        {
            dis_vec[i]= abs(vec[i]-p);
        }
        dis_vec.insert(it,0);
        for(long long int i=0;i<dis_vec.size();i++)
        {
            cout<<dis_vec[i]<<" ";
        }
    }
}