#include <stdio.h>
#include <stdbool.h>
void minus(int *a){
    *a = *a+1;

}
void print(char c){
    printf("%c", c);
    if(c==40)
        printf("jhvd");
}
int main(){
    int c = 10;
    int *d = &c;
    printf("%d\n", d);
    minus(&c);
    printf("%d", c);
    bool one = true,two = true,three;
    three = one&&two;
    printf("\n%d", three);
    print(40);

    char ca = 41;
    printf("%c",ca);

    return 0;
}
