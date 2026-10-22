#include <iostream>
#include <string>
using namespace std;

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

void printStr(string str) {
    cout << GREEN << "Permutation: " << str << RESET << endl;
}

void heapPermutation(string &str, int size, int n, int depth = 0) {
    if (size == 1) {
        printStr(str);
        return;
    }

    for (int i = 0; i < size; i++) {
        cout << BLUE << string(depth, '-') 
             << " Recursing with size=" << size-1 
             << " on " << str << RESET << endl;

        heapPermutation(str, size - 1, n, depth + 1);

        if (size % 2 == 1) {
            cout << RED << string(depth, '-') 
                 << " Odd swap: (" << str[0] << ", " << str[size-1] << ")" 
                 << RESET << endl;
            swap(str[0], str[size - 1]);
        } else {
            cout << YELLOW << string(depth, '-') 
                 << " Even swap: (" << str[i] << ", " << str[size-1] << ")" 
                 << RESET << endl;
            swap(str[i], str[size - 1]);
        }
    }
}

int main() {
    string word = "disc";
    cout << "🔎 Visualizing Heap's Algorithm for 'disc':\n";
    heapPermutation(word, word.length(), word.length());
    return 0;
}
