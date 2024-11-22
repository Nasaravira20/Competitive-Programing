#include <bits/stdc++.h>
using namespace std;

int kadane_algo(vector<int>& lst)
{
    int result = lst[0];
    int prev_max = lst[0];

    for (int i = 1; i < lst.size(); i++)
    {
        prev_max = max(prev_max + lst[i], lst[i]);
        result = max(prev_max, result);
    }

    return result;
}

int main()
{
    vector<int> vec = {2, 3, -8, 7, -1, 2, 3};
    cout<<"The Maximum subarray sum was "<<kadane_algo(vec);
}