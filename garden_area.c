#include<stdio.h>
int main()
{
    int length,width,path,ia,oa,ga;
    printf("length:\nwidth:\npath:\n",length,width,path);
    scanf("%d%d%d",&length,&width,&path);
    ia=length*width;
    oa=(length+2*path)*(width+2*path);
    ga=oa-ia;
    printf("ia=%d\noa=%d\nga=%d\n",ia,oa,ga);
    return 0;
}
