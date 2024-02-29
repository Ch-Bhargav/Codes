// ## Quest 01: Arm Your Wands!

// In this part, we invite you to create:
// - a variable named `var_1` of type **integer**
// - a variable named `var_2` of type **character**
// - a variable named `var_3` of type **integer**

// You will define the variables as follows:
// - `var_1` by assigning the value 42
// - `var_2` by assigning the value 'a'
// - `var_3` by assigning the value 91

// Now, create a variable of type `char` named `wizzard_wand` with the value (`var_1` + `var_2` - `var_3`)

// Now, display the value of `wizzard_wand`; it should result in '0'.

// We encourage you to explore several concepts that could help you!
// - The concept of [`variable`](https://koor.fr/C/Tutorial/Types.wp)

#include <stdio.h>
int main()
{
    int var_1 = 42;
    char var_2 = 'a';
    int var_3 = 91;
    char wizzard_wand = (var_1 + var_2 - var_3);
    printf("%c", wizzard_wand);
    return 0;
}