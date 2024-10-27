#include <iostream>
#include <string>
using namespace std;


size_t FindFirstSpacePosition(const string& s) {
    return s.find(' ');
}

string ConvertToUpperBeforeSpace(const string& s, size_t pos) {
    string result = s;
    for (size_t i = 0; i < pos; ++i) {
        if (islower(result[i])) {
            result[i] = toupper(result[i]);
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    
    size_t spacePos = FindFirstSpacePosition(str);

    
    string result = ConvertToUpperBeforeSpace(str, spacePos);

    
    cout << "Transformed string: " << result << endl;

    return 0;
}

