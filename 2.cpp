#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    FILE *fo=fopen("1.txt","w");
    char c;
    while((c=getchar())!='\n')
        fprintf(fo,"%c",toupper(c));
    return 0;
}
