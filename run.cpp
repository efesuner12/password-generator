#include <bits/stdc++.h>
using namespace std;

int main ()
{
    cout << "Downloading libs\n";

    string str0 = "pip install random";

    cout << "\nDownlaod complete\n";

    const char *command0 = str0.c_str();
    system(command0);

    char filename[100] = "passwordgenerator.py";

    string str = "python ";
    str = str + filename;

    const char *command = str.c_str();
    system(command);

    return 0;
}