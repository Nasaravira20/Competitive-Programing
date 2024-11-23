#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result = 0;
    while(n>0)
    {
        if (n%10 == 0) result = result*10 + 1;
        else result = result*10 + n%10;

        n /= 10;
    }

    while (result>0)
    {
        cout<<result%10<<"";
        result /= 10;
    }
}