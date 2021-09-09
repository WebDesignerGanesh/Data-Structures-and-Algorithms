#include<bits/stdc++.h>
using namespace std;
void recur(int n){                       //This func return number from 1 to 5
if(n<=0)
return;
recur(n-1);
cout<<n<<endl;
}

void recur1(int n){                           //This func returns number from 5 to 1
    if(n<=0)
    return;
    cout<<n;
    recur1(n-1);
}

int main(){
    int n;
    cin>>n;
    recur(n);
    recur1(n);
    return 0;
}


