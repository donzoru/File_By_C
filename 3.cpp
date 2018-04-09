#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cctype>
using namespace std;
int po=0;
int main()
{
    FILE *foo=fopen("1.txt","r");
    FILE *fot=fopen("2.txt","r");
    FILE *fp=fopen("3.txt","w");
    int num[100];
    void rd(FILE *,int *);
    rd(foo,num);
    rd(fot,num);
    sort(num,num+po);
    for(int i=0;i<po;++i)
        fprintf(fp,"%d%c",num[i],((i==po-1)?'\n':' '));
    return 0;
}
void rd(FILE* a,int *num)
{
    int n=0;
    char c;
    while((c=getc(a))!=EOF)
    {
        if(c==' ')
        {
            num[po++]=n;
            n=0;
        }
        else if(isdigit(c)) n=n*10+c-'0';
    }
    num[po++]=n;
    return;
}
