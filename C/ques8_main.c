// # Quest 08: Memory Repare-o!

// In this quest, we need your help to assist Draco Malfoy in performing the `memory_reparo` spell.

// While fighting with Harry, he tried to erase Harry's memory, but unfortunately, the spell backfired on him.

// You will need to create a function that returns the sum of all integers from 0 to n, inclusive, whether n is negative or positive.

// ```c
// int memory_reparo(int n);
// ```

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n * (n + 1) / 2);
    return 0;
}