#include<bits/stdc++.h>
using namespace std;
int n;
void adjustheap(int root,vector<int>&heap)
{
    int l=root*2+1,r=root*2+2;
    int mini=root;
    if(l<n&&heap[l]<heap[mini])
        mini=l;
    if(r<n&&heap[r]<heap[mini])
        mini=r;
    if(root!=mini)
    {
        swap(heap[root],heap[mini]);
        adjustheap(mini,heap);
    }
}
int main()
{
    cin>>n;
    vector<int>heap(n);
    for(int i=0;i<n;i++)
        cin>>heap[i];
    //从最后一个非叶子节点开始建立堆
    for(int i=n/2-1;i>=0;i--)
        adjustheap(i,heap);
    for(int i=0;i<n;i++)
        cout<<heap[i]<<" ";
}