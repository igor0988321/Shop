// ПР2, Карнаух Руслан, група 255, варіант 12


#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //string name;
    //cout << "Як вас звати? ";
    //cin >> name;
    //cout << "========================================" << endl;
    //cout << "  Меблі «Дім»" << endl;
    //cout << "  Стілець - 1150.00 грн" << endl;
    //cout << "  Подушка на стілець - 260.00 грн" << endl;
    //cout << "========================================" << endl;
    //cout << "Вітаємо, " << name << "! Гарних покупок!" << endl;
    //return 0;


    //int boxes, perBox, loose, order;
    //cout << "Повних коробок на складі: ";
    //cin >> boxes;
    //cout << "Штук в одній коробці: ";
    //cin >> perBox;
    //cout << "Штук поза коробками: ";
    //cin >> loose;
    //cout << "Замовлено штук: ";
    //cin >> order;

    //int stock = boxes * perBox + loose;
    //int left = stock - order;

    //cout << "На складі було, шт: " << stock << endl;
    //cout << "Залишиться після замовлення, шт: " << left << endl;
    //return 0;

    int price, qty;
    cin >> price >> qty;
    cout << "Вартість: " << price * qty << endl;
    return 0;
}