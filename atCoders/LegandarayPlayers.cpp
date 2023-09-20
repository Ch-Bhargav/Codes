#include <iostream>
#include <map>
using namespace std;

int main()
{
    std::map<std::string, int> players;

    players["tourist"] = 3858;
    players["ksun48"] = 3679;
    players["Benq"] = 3658;
    players["Um_nik"] = 3648;
    players["apiad"] = 3638;
    players["Stonefeang"] = 3630;
    players["ecnerwala"] = 3613;
    players["mnbvmar"] = 3555;
    players["newbiedmy"] = 3516;
    players["semiexp"] = 3481;

    string str;
    cin >> str;
    cout << players[str] << endl;

    return 0;
}
