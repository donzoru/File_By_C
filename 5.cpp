#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    FILE *fp=fopen("employee.txt","r");
    FILE *fo=fopen("em.txt","w");
    char row[150];
    while(fgets(row,149,fp))
    {
        int i,j,k;
        int len=strlen(row);
        row[len]=0;

        for(i=4;row[i]!=' ';i++)
            fprintf(fo,"%c",row[i]);
        fprintf(fo,"%c",' ');

        for(j=4; ;++i){
            if(row[i]==' ') j--;
            if(j==0) {k=i+1;break;}
        }
        double mon=0;
        for(j=k;row[j]!=' ';j++)
            if(row[j]!='.') mon=mon*10+row[j]-'0';
        mon/=100.00;
        fprintf(fo,"%.2lf\n",mon);
    }
    return 0;
}
