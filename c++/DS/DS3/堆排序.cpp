#include<bits/stdc++.h>
using namespace std;
void adjustheap(vector<int>&heap,int n, int root)
{
    int maxi=root;
    int l=root*2+1,r=root*2+2;
    if(l<n&&heap[l]>heap[maxi])
        maxi=l;
    if(r<n&&heap[r]>heap[maxi])
        maxi=r;
    if(maxi!=root)
    {
        swap(heap[root],heap[maxi]);
        adjustheap(heap,n,maxi);    //递归使得子树也是堆，只有交换了才会影响子树的结构
    }
}
void sortheap(vector<int>&heap,int n)
{
    //自低向上建立大顶堆
    for(int i=n/2-1;i>=0;i--)//   n/2-1是完全二叉树最后一个非叶子结点
        adjustheap(heap,n,i);
    //大顶堆转最小堆
    for(int i=n-1;i>0;i--)
    {

        swap(heap[i],heap[0]);
        adjustheap(heap,i,0);   //每次交换完可能就不是堆了，需要调整
    }

}
int main()
{
    int n;
    cin>>n;
    vector<int>heap(n);
    for(int i=0;i<n;i++)
        cin>>heap[i];
    sortheap(heap,n);
    for(int i=0;i<n;i++)
        cout<<heap[i]<<" ";
}