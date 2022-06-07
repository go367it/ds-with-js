#include <stdio.h>
int main()
{
    char str1[] = "WDC";
    char str2[] = {'W', 'D', 'C'};
    int n1 = sizeof(str1) / sizeof(str1[0]);
    int n2 = sizeof(str2) / sizeof(str2[0]);
    printf("n1 = %d, n2 = %d", n1, n2);
    return 0;
}