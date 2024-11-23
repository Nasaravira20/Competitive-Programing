#include <bits/stdc++.h>
using namespace std;

int positional_notation(int n)
{
    int p = 0, result = 0;
    while(n > 0)
    {
        if(n%10) result += pow(2,p);
        p++;
        n /= 10;
    }

    return result;
}

int doubling(int n)
{
    int rev_n = 0;
    while(n > 0)
    {
        rev_n = rev_n*10 + n%10;
        n/=10;
    }
    int result = 0;
    while(rev_n > 0)
    {
        result = result*2 + rev_n%10;
        rev_n /= 10;
    }

    return result;
}
int main()
{
    int b_num;
    cout<<"enter the binary number ";
    cin>>b_num;

    cout<<doubling(b_num);
}