#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    x>y? printf("x>y"): x==y? printf("x=y"): printf("x<y");
}
