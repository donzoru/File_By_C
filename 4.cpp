#include<iostream>
#include<cstdio>
#define n 20
using namespace std;
int main()
{
    FILE *fon=fopen("name.txt","r");
    FILE *foa=fopen("address.txt","r");
    FILE *fo=fopen("nameaddr.txt","w");
    char na[n],sex[5],add[5*n];
    int y;
    fseek(fon,0L,SEEK_SET);
    fseek(foa,0L,SEEK_SET);
    while(!feof(fon) && !feof(foa))
    {
        fscanf(fon,"%[a-z] %[a-z] %d\n",na,sex,&y);
        fscanf(foa,"%[^\n]\n",add);
        fprintf(fo,"%s %s %s %d\n",na,add,sex,y);
    }
    return 0;
}
