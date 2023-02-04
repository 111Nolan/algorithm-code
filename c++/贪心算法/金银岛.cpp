#include<bits/stdc++.h>
using namespace std;
/*
简单的贪心，因为金银是可以打碎的
*/
#define N 105
struct Metal
{
    double n, v;
};
bool cmp(Metal a, Metal b)
{
    return a.v/a.n > b.v/b.n;
}
int main()
{
    int k, w, s;
    Metal m[N];
    cin >> k;
    while(k--)
    {
        double totVal = 0;
        cin >> w >> s;
        for(int i = 1; i <= s; ++i)
            cin >> m[i].n >> m[i].v;
        sort(m+1, m+1+s, cmp);
        for(int i = 1; i <= s; ++i)
        {
            if(w >= m[i].n)//w:剩余可放重量
            {
                totVal += m[i].v;
                w -= m[i].n;
            }
            else
            {
                totVal += m[i].v/m[i].n*w;
                break;
            }
        }
        cout << fixed << setprecision(2) << totVal<< endl;
    }
    return 0;
}
