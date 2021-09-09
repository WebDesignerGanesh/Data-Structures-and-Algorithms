#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    cout<<" The vector elements are " ;
    for(auto it = v.begin();it != v.end(); ++it )
    cout<<*it<<' ';
    cout<<endl;
    cout<<" The reverse vector elements are ";
    for(auto it = v.rbegin();it != v.rend(); ++it )
    cout<<*it<<' ';
    cout<<endl;

    vector<int>v2{5,2,4,3,1};
    int sum=0;
    while(!v2.empty())
    {
        sum += v2.back();             //adding back elements to sum variable initialised to 0
        v2.pop_back();                //poping the element
    }
    cout<<sum;
    cout<<endl;
    vector<int>v3{1,2,3,4,5,6};
    cout<<" Elements before resize ";
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    v3.resize(10,9);            //we have resize vector size from 6 to 10 and we have initialiesd remaining elements with 9
    cout<<" Elements after resize ";
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    return 0;
}

