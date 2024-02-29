// # Quest 07: Magic Letters!

// In this quest, we want you to create a function named `is_upper`.

// This function returns true if the sent character is in uppercase.

// From now on, don't forget to include your own test function.

// ```c
// #include <stdbool.h>
// bool is_upper(char c);
// ```

// ```
// #include <stdio.h>

// int main()
// {
//   printf("1 == %d\n", is_upper('A'));
//   printf("0 == %d\n", is_upper('z'));
//   printf("0 == %d\n", is_upper('5'));
//   return 0;
// }
// ```

#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("1");
    else
        printf("0");
    return 0;
}