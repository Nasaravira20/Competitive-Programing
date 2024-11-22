#include <bits/stdc++.h>
using namespace std;

int k_index(vector<int>& lst)
{
    int left = 0, right = lst.size() - 1;
    

    while (left <= right)
    {
        int mid = (left + right)/2;
        if(mid > 0 and lst[mid] < lst[mid-1]) return mid;
        else if(lst[mid] > lst[right]) left = mid + 1;
        else right = mid-1;
    }
    return 0;
}
int ele_search(vector<int>& lst,int left,int right, int target)
{
    // int left = 0, right = lst.size() - 1;
    

    while (left <= right)
    {
        int mid = (left + right)/2;
        if(lst[mid] == target) return mid;
        else if(lst[mid] < target) left = mid + 1;
        else right = mid - 1;
        // mid = (left+right) / 2;
    }
    return -1;
}
int search_rotated(vector<int>& lst, int target)
{
    int n = lst.size();
    int st_ind = k_index(lst);

    if(lst[st_ind] == target) return st_ind;
    if(st_ind == 0) ele_search(lst,0,n-1,target);
    else if(lst[0] <= target) return ele_search(lst,0,st_ind-1,target);
    return ele_search(lst,st_ind,n-1,target);
    // else return ele_search(lst,0,)
    // return -1;
}
int main()
{
    vector<int> vec = {1,3};
    cout<<search_rotated(vec,3);


}