#include<stdio.h>

int main(void)
{

    char t1[32];
    char t2[32];
    char t3[32];
    printf("t1 ");
    gets(t1);
    printf("t2 ");
    gets(t2);
    int len = strlen(t1);
    printf("%d\n",len);
    strcpy(t3,t1);
    puts(t3);
    strcpy(t3, t2);
    puts(t3);
    strcat(t3, " ");
    strcat(t3, t2); // concatenation
    puts(t3);
    int n = strcmp(t2,t1);
    printf("%d\n", n);
    puts(strlwr(t1));
    puts(strupr(t2));
    return 0;
}

