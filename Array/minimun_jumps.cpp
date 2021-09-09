#include<bits/stdc++.h>
using namespace std;
int mini_jump(int arr[], int n)
{
    int maxR = arr[0];
    int step = arr[0];
    int jump =1;
    if(n==0) return 0;
    else if(arr[0] == 0) return -1;
    else
    {
        for(int i=1;i<n;i++)
        {
            if(i == n-1)
            {
            return jump;
            }
            maxR =max(maxR, i +arr[i]);
            step--;
            if(step ==0)
            {
                jump ++;
                if(i > maxR)
                {
                    return -1;
                }
                step = maxR-i;
            }

        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<mini_jump(arr,n);
    return 0;
}