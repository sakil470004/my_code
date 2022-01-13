#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "first is the first word we like first.";
    string target("first");
    string repl("second");
    string::size_type pos = str.find(target);

    while(pos != string::npos){
            str.replace(pos, target.size(), repl);
            pos = str.find(target, pos + repl.size());
    }


    cout << str << endl;
    return 0;
}
