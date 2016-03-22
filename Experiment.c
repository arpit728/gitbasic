#include <stdio.h>

int main() {
    
    int i=3,*j,p=5;
    j=&p;
    //*j=&i;
    printf("%d %u",*j,&i);
    return 0;
}

