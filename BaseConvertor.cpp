#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
using namespace std;

string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

string decimalToOctal(int decimal) {
    stringstream ss;
    ss << oct << decimal;
    return ss.str();
}

string decimalToBinary(int decimal) {
    return bitset<32>(decimal).to_string();
}

int hexToDecimal(string hex) {
    int decimal;
    stringstream ss;
    ss << hex << hex;
    ss >> decimal;
    return decimal;
}

int octalToDecimal(string octal) {
    int decimal;
    stringstream ss;
    ss << oct << octal;
    ss >> decimal;
    return decimal;
}

int binaryToDecimal(string binary) {
    return bitset<32>(binary).to_ulong();
}

void showMenu() {
    cout << "Base Converter Options:" << endl;
    cout << "1. Decimal to Hexadecimal" << endl;
    cout << "2. Decimal to Octal" << endl;
    cout << "3. Decimal to Binary" << endl;
    cout << "4. Hexadecimal to Decimal" << endl;
    cout << "5. Octal to Decimal" << endl;
    cout << "6. Binary to Decimal" << endl;
    cout << "7. Convert between all 4 bases" << endl;
    cout << "8. Exit" << endl;
}

int main() {
    int option;
    int decimal;
    string input;

    while (true) {
        showMenu();
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter Decimal: ";
                cin >> decimal;
                cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
                break;
            case 2:
                cout << "Enter Decimal: ";
                cin >> decimal;
                cout << "Octal: " << decimalToOctal(decimal) << endl;
                break;
            case 3:
                cout << "Enter Decimal: ";
                cin >> decimal;
                cout << "Binary: " << decimalToBinary(decimal) << endl;
                break;
            case 4:
                cout << "Enter Hexadecimal: ";
                cin >> input;
                cout << "Decimal: " << hexToDecimal(input) << endl;
                break;
            case 5:
                cout << "Enter Octal: ";
                cin >> input;
                cout << "Decimal: " << octalToDecimal(input) << endl;
                break;
            case 6:
                cout << "Enter Binary: ";
                cin >> input;
                cout << "Decimal: " << binaryToDecimal(input) << endl;
                break;
            case 7:
                cout << "Enter Decimal: ";
                cin >> decimal;
                cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
                cout << "Octal: " << decimalToOctal(decimal) << endl;
                cout << "Binary: " << decimalToBinary(decimal) << endl;
                break;
            case 8:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
