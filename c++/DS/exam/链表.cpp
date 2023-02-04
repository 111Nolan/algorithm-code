#include<bits/stdc++.h>
using namespace std;
struct node
{
    char l;
    node *next;
};
void initlist(node *&a,string s)
{
    a=new node;
    node *p,*t;
    p=a;
    for(char i:s)
    {
        t=new node;
        t->l=i;
        p->next=t;
        p=p->next;
    }
    p->next=NULL;
}
void print(node *head)
{
    node *p=head->next;//头节点是空姐点
    while(p)
    {
        cout<<p->l;
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    node *head;
    string a;
    cin>>a;
    initlist(head,a);
    print(head);
}