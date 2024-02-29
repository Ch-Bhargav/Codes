// ## Quest 06: Metamorphosis Formula!

// Now, create a function to draw a square!

// This function takes a size as a parameter, defining the size of the square.

// ```c
// #include <stdio.h>
// void draw_square(int size);
// ```

// Here is how the square should look when printed:

// ```c
// $> ./a.out
// -----
// -----
// -----
// -----
// -----
// $>
// ```

#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int i = 0;
    while (i < size)
    {
        int j = 0;
        while (j < size)
        {
            printf("-");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}