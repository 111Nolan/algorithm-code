#include<bits/stdc++.h>
using namespace std;
/*
简单的层次遍历，注意一下退出循环条件即可
*/
int main()
{
    int k,x;
    scanf("%d,%d",&k,&x);
    queue<int>que;
    if(k==x)
    {
        printf("YES\n");
        return 0;
    }
    que.push(k);
    while(!que.empty())
    {
        int size=que.size(),i;
        for(i=0;i<size;i++)
        {
            int temp=que.front();
            que.pop();
            if(temp==x)
            {
                printf("YES\n");
                return 0;
            }
            if(temp>x)//如果这个结点就已经大于了，后面就不需要再加入了
                continue;
            int a=temp*2+1,b=temp*3+1;
            que.push(a),que.push(b);
        }
    }
    printf("NO\n");
}