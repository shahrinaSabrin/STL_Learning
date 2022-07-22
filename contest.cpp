#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long n,k,p;
        scanf("%lld %lld %lld",&n,&k,&p);
        long long a[n], b;
        for(long long i=0; i<n; i++)
        {
            long long x;
            scanf("%lld",&x);
            a[i] = x - k;
        }
        sort(a,a+n);
        for(long long i=0; i<n; i++)
        {
            if(a[i]<0)
                a[i] = abs(a[i]);
            if(a[i]==0)
            {
                b=i;
                break;
            }
        }
        long long last=b, first=b, cnt=0, temp;
        while(1)
        {
            if(last>=n-1 && first<=0)
                break;
            last+=k, first-=k;
            if(first<0)
                first = 0;
            if(last>n-1)
                last = n-1;
                
            if(a[first]<a[last])
            {
                temp = a[last];
                a[last]=0;
                first += k;
            }
               
            if(a[first]>=a[last])
            {
                temp=a[first];
                a[first]=0;
                last -=k;
            }
            cnt += 2*temp;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}