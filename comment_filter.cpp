#include<iostream>
#include<string>
#include<fstream>

using std::cout;
using std::endl;
using std::cin;

using namespace std;
int main() 
{
    // Write your program here.
    string source;
    ifstream readFile("story.txt");
    getline(readFile, source, '\0');
    while(source.find('#') != string::npos) {
        size_t Beg = source.find('#');
        source.erase(Beg, (source.find('\n', Beg) - Beg)+1);
    }

    cout << source;
    return 0;
}

