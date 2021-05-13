#include <stdio.h>
#include <string.h>
int main(){
    char a[] = "string";
    strcpy(&a[2], &a[2 + 1]);
    strcat(a,"(");
    puts(a);
    return 0;
}
