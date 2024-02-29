#include <iostream>
void function(long int &a, long int &b)
{
    long int temp = a;
    a = b;
    b = temp;
}
int main()
{
    long int a, b;
    std::cin >> a >> b;
    function(a, b);
    std::cout << a << " " << b;
    return 0;
}