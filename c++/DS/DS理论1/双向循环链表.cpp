#include<bits/stdc++.h>
using namespace std;
struct Dulnode
{
    int data;
    struct Dulnode* next;
    struct Dulnode* prior;
};
void creatDulnode(Dulnode*& l)
{
    l=(Dulnode*)malloc(sizeof(Dulnode));
    l->prior=l;
    l->next=l;
}
void printDulnode(Dulnode*l)
{
    Dulnode* q;
    q=l->next;
    int i=0;
    while(q!=l)
    {
        if(i++)
            printf(" ");
        printf("%d",q->data);
        q=q->next;
    }
    printf("\n");
}
void insertDulnode(Dulnode*& l,int i,int e)
{
    Dulnode* q,* qlen;
    q=l;
    qlen=l->next;
    int len=0;
    while(qlen!=l)
    {
        len++;
        qlen=qlen->next;
    }
    int j=1;
    while(j<i)
    {
        j++;
        q=q->next;
    }
    if(i>len+1||i<1)
        return;
    Dulnode* s;
    s= (Dulnode*)malloc(sizeof(Dulnode));
    s->data =e;
    s->next=q->next;
    s->prior=q;
    q->next->prior=s;
    q->next=s;
}
void deleteDulnode(Dulnode*& l,int i)
{
    Dulnode* q,*qlen;
    qlen=l->next;
    q=l;
    int len=0;
    while(qlen!=l)
    {
        qlen=qlen->next;
        len++;
    }
    if(i<1||i>len)
        return;
    int j=1;
    while(j<i)
    {
        q=q->next;
        j++;
    }
    Dulnode* qfree;
    qfree= q->next;
    q->next=qfree->next;
    qfree->next->prior=q;
    free(qfree);
}
int main()
{
    int n;
    Dulnode* l;
    creatDulnode(l);
    while(scanf("%d",&n)!=EOF)
    {
        switch (n)
        {
            case 0:
            {
                printDulnode(l);
                break;
            }
            case 1:
            {
                int i,e;
                scanf("%d %d",&i,&e);
                insertDulnode(l,i,e);
                break;
            }
            case 2:
            {
                int i;
                scanf("%d",&i);
                deleteDulnode(l,i);
                break;
            }
            default:
                break;
        }
    }
}