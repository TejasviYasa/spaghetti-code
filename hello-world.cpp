#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // my comment
    //std::cout << "Hello UTD" << std::endl;
    int a[11] = {72, 101, 108, 108, 111, 32, 85, 84, 68, 33, 0};
    string s;
    for (int i = 0; i < 11; i++) {
        char l = a[i];
        s += l;
        cout << s.substr(i, i+1);
    }
    return 0;
}