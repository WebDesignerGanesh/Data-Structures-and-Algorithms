#include<bits/stdc++.h>
using namespace std;
char *duplicate(char str[])
{
    string res;
    int i=0;
    bool hash[]={0};
    while(i<=strlen(str))
    {
    if(hash[str[i]]==false)
    {
        hash[str[i]]=true;
        res += str[i];
    }

    i +=1;
    }
    return str;

}
int main()
{
    char str[]="abcab";
    cout<<duplicate(str);
    return 0;
}