#include<bits/stdc++.h>
using namespace std;
int pivot(int start,int end,vector<int>&a)
{
    while(start<end)
    {
        while(start<end&&a[start]>=a[end])
            start++;
        swap(a[start],a[end]);
        while(start<end&&a[start]>=a[end])
            end--;
        swap(a[start],a[end]);
    }
    return start;
}
void quicksort(int start ,int end,vector<int>&a)
{
    if(start>=end)
        return ;
    int p=pivot(start,end,a);
    quicksort(start,p-1,a);
    quicksort(p+1,end,a);
}
int main()
{
    vector<int>a(6);
    for(int i=1;i<=5;i++)
        scanf("%d",&a[i]);
    quicksort(1,5,a);
    for(int i=1;i<=5;i++)
        cout<<a[i]<<" ";
}