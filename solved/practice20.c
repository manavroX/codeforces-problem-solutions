#include <stdio.h>
int main()
{
    char c;
    int max;
    scanf("%c", &c);
    if(c>=48&&c<=57)
    {max = c-48;}
    for(c;c!='\n';scanf("%c", &c))
    {
        if(c>=48&&c<=57)
        {
            if(c-48>max)
            {
                max=c-48;
            }
        }
    }
    printf("%d", max);
    return 0;
}
