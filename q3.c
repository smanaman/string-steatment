#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int x;

    printf("Enter any string: ");
    gets(str);

    printf("Toggle case string: ");
    for (x = 0; str[x] != '\0'; x++) {
        if (str[x] >= 'A' && str[x] <= 'Z')
            printf("%c", str[x] + 32);
        else if (str[x] >= 'a' && str[x] <= 'z')
            printf("%c", str[x] - 32);
        else
            printf("%c", str[x]);
    }

    return 0;
}
