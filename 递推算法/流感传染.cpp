#include<bits/stdc++.h>
using namespace std;
/*bfs遍历，传染病模型*/
vector<string>rooms;
int main()
{
    int n,m;
    int e1[4]={1,-1,0,0},e2[4]={0,0,1,-1};
    scanf("%d",&n);
    queue<pair<int,int>>myque;
    string a;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j=0;j<n;j++)
        {
            if(a[j]=='@')
            {
                ans++;
                myque.push({i,j});
            }
        }
        rooms.push_back(a);
    }
    scanf("%d",&m);
    m--;
    while(!myque.empty()&&m--)
    {
        int size=myque.size();
        for(int i=0;i<size;i++)
        {
            auto temp=myque.front();
            myque.pop();
            int x=temp.first,y=temp.second;
            for(int i=0;i<4;i++)
            {
                int newx=x+e1[i];
                int newy=y+e2[i];
                if(newx<0||newx>=n||newy<0||newy>=n)
                    continue;
                if(rooms[newx][newy]=='.')
                {
                    ans++;
                    rooms[newx][newy]='@';
                    myque.push({newx,newy});
                }
            }
        }
    }
    printf("%d",ans);
}