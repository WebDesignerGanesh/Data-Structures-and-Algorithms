#include<bits/stdc++.h>
using namespace std;
int single(vector<int>& vect)
{
    int res=0;
    for(int i=0;i<vect.size();i++)        
    {
        res ^= vect[i];                 //using XOR for comparing all numbers and finding out single number
    }
    return res;
}
int main()
{
    vector<int> vect{4,1,2,1,2};        
    cout<<single(vect);
    return 0;
}