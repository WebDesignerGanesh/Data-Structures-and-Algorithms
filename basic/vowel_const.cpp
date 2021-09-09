#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'
    || n== 'A' || n=='E' || n=='I' || n=='O' || n=='U')
    {
        cout<<" It is a vowel ";
    }
    else
    cout<<"It Is a Constant ";
    return 0;
}