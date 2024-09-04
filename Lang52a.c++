#include <iostream>

using namespace std;

int main() {
    int length;
    int width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    int area = length * width;
    int perim = 2 * length + 2 * width;
    cout << "The area is: " << length << endl;
    cout << "The perimeter is: " << perim << endl;
}