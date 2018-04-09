#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    FILE *fp,*fo;
    fp=fopen("1.txt","r");
    int n=0;
    fscanf(fp,"%d",&n);
    fo=fopen("2.txt","w");
    for(int i=1;i<=n;++i)
        fprintf(fo,"%d%c",i,((i==n)?'\n':' '));
    return 0;
}
