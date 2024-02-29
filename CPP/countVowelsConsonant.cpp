#include <iostream>
int main()
{
    std::string s;
    std::cin >> s;
    int vowels = 0, consonants = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            consonants++;
        }
    }
    std::cout << vowels << " " << consonants << std::endl;
    return 0;
}