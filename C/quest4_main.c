// # Quest 03: Wingardium Leviosa

// Create a function `wingardium_leviosa` in which you will input a character `letter` that will be printed `number_occurrences` times.

// ```c
// void wingardium_leviosa(char letter, int number_occurrences);
// ```

// Here is a test main:

// ```c
// int main()
// {
//   wingardium_leviosa('a', 4); // prints aaaa
//   wingardium_leviosa('z', 3); // prints zzz
//   wingardium_leviosa('$', 0); // doesn't print anything
//   wingardium_leviosa('_', -1); // doesn't print anything
//   return (0);
// }
// ```

// We invite you to explore several concepts that could help you!

// The concept of [`fonctions`](https://koor.fr/C/Tutorial/Fonctions.wp)

// And let's not forget!

// <img id="leviosa_img" src="https://media.tenor.com/Ee54nMe1LpgAAAAd/its-leviosa-not-leviosar.gif">

#include <stdio.h>
void wingardium_leviosa(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch);
    }
}
int main()
{
    char ch;
    int n;
    scanf("%c %d", &ch, &n);
    wingardium_leviosa(ch, n);
    return 0;
}