#include <iostream>
#include <vector>
#include <string>


//https://code.visualstudio.com/docs/cpp/config-linux

using namespace std;
int main()
{
   
       vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int a=0;
    cout << "\nEscribe un entero para la variable a, actualmente vale: " << a << "\n";
    cout << " a: ";
    cin >> a;
    cout << "a vale ahora: " << a << "\n";

    //test

    return 0;
}

