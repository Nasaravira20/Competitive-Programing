#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& lst) {
    int n = lst.size();
    int max_product = lst[0];

    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = i; j < n; j++) {
            product *= lst[j];  
            max_product = max(max_product, product);  
        }
    }

    return max_product;
}
int max_prod(vector<int>& lst)
{
    int mi = lst[0];
    int mx = lst[0];
    int result = lst[0];

    for(int i = 1; i < lst.size(); i++)
    {
        if(lst[i] < 0)
        {
            swap(mi,mx);
        }  

        mx = max(lst[i],mx*lst[i]);
        mi = min(lst[i],mi*lst[i]);

        result = max(result , mx); 
    }

    return result;
}
int main()
{
    vector<int> vec = {-1, -3, -10, 0, 60};
    cout<<"The maximum product is "<<max_prod(vec);
}