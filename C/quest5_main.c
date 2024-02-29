// #Quest 05 : The Order of the Phoenix !

// In this quest, you will have to perform spells to open the secret base of the Order of the Phoenix !

//     To achieve this,
//     you will create a function `phoenix_is_between` that takes three integers
//         named `min`, `value`,
//     and `max` as parameters.

//         This function will return true if the value given as a parameter is between min and
//         max.

// ```c
// #include <stdbool.h>
//         bool
//         phoenix_is_between(int min, int value, int max);
// ``` Here is a test main :

// ```c int main()
// {
//     printf("true == %d\n", phoenix_is_between(4, 6, 9));
//     printf("false == %d\n", phoenix_is_between(0, -6, 9));
//     return (0);
// }
// ```

#include <stdio.h>
int phoenix_is_between(int min, int value, int max)
{

    if (min < value && value < max)
        return 1;
    else
        return 0;
}
int main()
{
    int min, value, max;
    scanf("%d %d %d", &min, &value, &max);
    if (phoenix_is_between(min, value, max) == 1)
        printf("true");
    else
        printf("false");
    return 0;
}