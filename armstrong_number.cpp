#include <bits/stdc++.h>
using namespace std;

bool armstrong_check(int num)
{
    int n = (int)floor(log10(num)+1);
    int arm_num = 0, temp = num;
    
    while (num > 0)
    {
        arm_num += pow(num%10, n);
        num /= 10;
    }
    // cout<< temp<<" "<<arm_num<<endl;
    return temp == arm_num;
}
int main()
{
    int start, end;
    cout<<"enter the start range: ";
    cin>> start;
    cout<<"enter the end range: ";
    cin>>end;

    for (int i = start; i <= end; i++)
    {
        if (armstrong_check(i)) cout<<i<<" ";
    }
}