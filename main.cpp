//Напишите программу обмена валют: программа запрашивает текущий курс
//доллара, например, к рублю, и количество единиц (рублей) для конвертации и
// выводит на консоль сконвертированную сумму в долларах.

#include <iostream>

using namespace std;

int main() {

    const double dollars {1};
    const double rubles {60};

    cout << "The well now is " << dollars << "$ = " << rubles << " rubles \n";

    double quantity_of_rubles {};
    cout << "Enter the quantity of rubles\n";
    cin >> quantity_of_rubles;

    const double well {quantity_of_rubles / rubles};

    cout << quantity_of_rubles << " rubles = " << well << "$\n";

    return 0;
}
