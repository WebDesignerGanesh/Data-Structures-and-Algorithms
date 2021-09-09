#include<bits/stdc++.h>
using namespace std;
int find_power(int base,int power)
{
    if(power == 0)
    return 1;
    else
    return base * find_power(base,power-1);   // program only use for integer not for point values
}
int main()
{
    int base,power;
    cin>>base>>power;
    cout<<find_power(base,power);
    return 0;
}


//this program can find power of point variable also

#include <iomanip>
    #include <iostream>
    #include <math.h>
    using namespace std;
    //main program
    int main() 
    {
        double exp, base;
        cout<<“Enter base: “;
        //user input 1
        cin>>base;
        cout<<“Enter Exponent: “;
        //user input 2
        cin>>exp;
        //calculating power using function
        double res = pow(base, exp);
        //printing result
        cout << base << “^” << exp << ” = “ ;
        cout << fixed <<setprecision(2)<<res<<endl;
        return 0;
    }