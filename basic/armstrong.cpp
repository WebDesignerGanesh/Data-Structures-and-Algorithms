#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                     //armstrong number means that number single digit cubes is equal to number 
    cin>>n;                    //for eg 153 = 1^3 + 5^3 + 3^3
    int temp = n;              // therefore 153=153
    int sum=0,rem;
    while(n!=0)
    {
        rem = n%10;                      //get reaminder 
        sum = sum + pow(rem,3);         // adding sum to power of remainder
        n /= 10;                         // get coeficient

    }
    cout<<sum<<endl;
    if(sum == temp){
    cout<<"number is armstrong";}
    else
    cout<<"Number is Not armstrong";
    return 0;
}