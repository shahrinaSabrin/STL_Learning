//VECTOR FULL CLASS
#include<bits/stdc++.h>
#include <initializer_list>
#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++)
        cin>>vec[i];
    /*
    //SORTING
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
        cout<<endl;
    */
    /*
    //REVERSE
    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
        cout<<endl;
    */

    /*
    //ITERATOR (TO FIND THE OCCURANCE)
    vector<int>::iterator it;
    int num;//that i want to find
    cin>>num;

    it = find (vec.begin(), vec.end(),num);
    if((it - vec.begin())==vec.size())
        cout<<"The number is not  found!\n";
    else
        cout<<"The 1st occurance of the number is in the index of "<<it-vec.begin()<<endl;
     
    reverse(vec.begin(),vec.end());
        it = find (vec.begin(), vec.end(),num);
    if((it - vec.begin())==vec.size())
        cout<<"The number is not  found!\n";
    else
        cout<<"The last occurance of the number is in the index of "<<vec.end()-(it+1)<<endl;
    */

    //UPPER_BOUND & LOWER_BOUND 
    vector<int>:: iterator upr_bound,lwr_bound;
    int num;
    cin>>num;
    upr_bound = upper_bound(vec.begin(),vec.end(),num);
    cout<<"Upper bound for "<<num<<" is at the position "<<upr_bound-vec.begin()<<endl;

    lwr_bound = lower_bound(vec.begin(),vec.end(),num);
    cout<<"Lower bound for "<<num<<" is at the position "<<lwr_bound-vec.begin()<<endl;

    //INSERTION(insert 10 at the upper_bound of the num)
    vec.insert(upr_bound,10);
    //DELETION(DELETE THE 3rd ITEM OF THE VECTOR)
    vec.erase(vec.begin()+2);

    /*
    //AUTO
    for(auto item: vec)
     cout<<item<<" ";
    */
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

    cout<<endl;


    return 0;
}