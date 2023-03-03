//Напишите программу, которая запрашивает у пользователь радиус круга и, используя полученный радиус, вычисляет площадь круга.

#include <iostream>

using namespace std;

int main() {

    const float number_of_pi {3.14};
    int radius {};


    cout << "Enter the radius\n";
    cin >> radius;

    const float square {number_of_pi * radius * radius};

    cout << "The square is " << square;

    return 0;
}
