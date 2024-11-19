#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    printf("str1 :");
    gets(str1);
    printf("\nstr2 :");
    gets(str2);
    if(strlen(str1)==strlen(str2)){
    int count=0;
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            count = 1;
            break; // Exit the loop if a mismatch is found
        }
    }
    if (count==0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    }
    else
        printf("The strings are not equal.\n");

    return 0;
}
