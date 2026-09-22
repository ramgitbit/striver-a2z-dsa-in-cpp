#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outFile("student.txt");

    if (!outFile) {
        cout << "File cannot be opened";
        return 1;
    }

    outFile << "Name: Ram\n";
    outFile << "Course: CSE\n";
    outFile << "Marks: 90\n";

    outFile.close();


    ifstream inFile("student.txt");

    if (!inFile) {
        cout << "File cannot be opened";
        return 1;
    }

    string line;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}