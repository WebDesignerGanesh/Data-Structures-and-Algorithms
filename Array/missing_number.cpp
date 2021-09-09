#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int num)
{
    int res=0;
    
    for(int i=0;i<num;i++) 
    {
      res ^= arr[i]^i+1;                       //XOR logic is used to avoid underflow
                                                  //it will compare natural number with current array
    }
    return res;

}
int main()
{
    int num;
    int arr[]={0,1,2,3,5};
    num = sizeof(arr)/sizeof(arr[0]);
    cout<<missing(arr,num);
    return 0;
}