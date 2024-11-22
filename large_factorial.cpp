#include <bits/stdc++.h>
using namespace std;

void calculate(vector<int>& result,int multiple)
{
    int carry = 0;
    for(int i = 0; i < result.size(); i++)
    {
        int p = result[i] * multiple + carry;
        result[i] = p % 10;
        carry = p/10;
    }
    while(carry)
    {
        result.push_back(carry%10);
        carry /= 10;
    }
}
vector<int> factorial(int x, vector<int>& result)
{
    // vector<int> result;
    result.push_back(1);

    for(int i = 2; i <= x; i++)
    {
        calculate(result,i);
    }

    return result;
}

int main()
{
    int n = 50;
    vector<int> result;
    factorial(n,result);
    reverse(result.begin(),result.end());
    for(int i : result) cout<<i;
}