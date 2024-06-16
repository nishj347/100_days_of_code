// Author: nishj347 @github
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string st = "helloo cutiee";
    ofstream out("demo.txt");
    if (!out) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    out << st;
    out.close();
    
    if (out.fail()) {
        cerr << "Failed to write to the file." << endl;
        return 1;
    }

    cout << "Data written successfully." << endl;
    return 0;
}
