// ## Quest 02: Print Salazar Alphabet!

// To succeed in this exercise, you need to display the lowercase alphabet on the terminal, followed by a newline. Below, you will find the commands to compile your program, run your program, and the expected program output.

// ```bash
// $> ls
// write_alphabet.c
// $> gcc write_alphabet.c -W -Wall -Werror
// $> ./a.out
// abcdefghijklmnopqrstuvwxyz
// $>
// ```

// Your expected file is `write_alphabet.c`

// From now on, we provide you with this function that takes a letter as a parameter that you want to display in the terminal.

// ```c
// int colint_putchar(const char letter) {
//   return write(1, &letter, 1);
// }
// ```

// With the way to call it:

// ```c
// int main(void) {
//   colint_putchar('H');
//   colint_putchar('e');
//   colint_putchar('y');
//   colint_putchar('\n');
// }

#include <stdio.h>
int main()
{
    int i = 97;
    while (i < 123)
    {
        printf("%c", i);
        i++;
    }
    return 0;
}