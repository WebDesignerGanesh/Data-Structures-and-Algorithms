#include<iostream>
using namespace std;
int main()
{
    int num,num2=0;
    cin>>num;
    if(num == 0)
    {
        num2 =1;
    }
    while(num > 0)
    {
        int rem = num%10;
        if(rem ==0)
         rem = 1;
        num /= 10;
        num2 = num2*10 + rem; 

    }
    cout<<" converted number is "<<num2;
    return 0;
}