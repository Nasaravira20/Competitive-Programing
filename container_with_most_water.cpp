#include <bits/stdc++.h>
using namespace std;

int main()
{
    int area = 0;
    vector<int> arr = {3, 1, 2, 4, 5};
    int i = 0, j = arr.size()-1;
    while(i < j)
    {
        int temp = min(arr[i],arr[j]) * (j - i);
        area = max(area,temp);

        if(arr[i]>arr[j]) --j;
        else ++i;
    }

    cout<<area;
}
