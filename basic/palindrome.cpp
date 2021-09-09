#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp = n;
    int rev=0,rem;
    while(n!=0)
    {
        rem = n%10;                      //get reaminder 
        rev = rev*10+rem;                //add remainder to reverse and also add with it
        n /= 10;                         // get coeficient

    }
    cout<<rev<<endl;
    if(rev == temp){
    cout<<"number is palindrome";}
    else
    cout<<"Number is Not palindrome";
    return 0;
}