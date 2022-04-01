#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char m1[10], m2[10];
    int owin[210], olose[210], p1, p2, i, n, m, k = 0;
    while (~scanf("%d", &n) && n)
    {
        scanf("%d", &m);
        if (k)printf("\n");
        memset(owin, 0, sizeof(owin));
        memset(olose, 0, sizeof(olose));
        for (i = 0;i<m*n*(n - 1) / 2;++i)
        {
            scanf("%d%s%d%s", &p1, m1, &p2, m2);
            if ((!strcmp(m1, "rock") && !strcmp(m2, "scissors")) || (!strcmp(m1, "scissors") && !strcmp(m2, "paper")) || (!strcmp(m1, "paper") && !strcmp(m2, "rock")))
                owin[p1]++, olose[p2]++;
            if ((!strcmp(m1, "rock") && !strcmp(m2, "paper")) || (!strcmp(m1, "paper") && !strcmp(m2, "scissors")) || (!strcmp(m1, "scissors") && !strcmp(m2, "rock")))
                owin[p2]++, olose[p1]++;
        }
        for (i = 1;i <= n;++i)
            if (owin[i] + olose[i])
                printf("%.3lf\n", (double)owin[i] / (owin[i] + olose[i]));
            else
                printf("-\n");
        k++;
    }
}
