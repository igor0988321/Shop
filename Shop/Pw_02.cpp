// ПР2, Карнаух Руслан, група 255, варіант 12


#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;


int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //27.11.2026

    int T;
    cout << "Сума до сплати без копійок, грн: ";
    cin >> T;

    int paid = (T / 1000 + 1) * 1000;
    int change = paid - T;
    int n100 = change / 100;
    int rest = change % 100;
    int n50 = rest / 50;
    rest = rest % 50;
    int n10 = rest / 10;
    int n1 = rest % 10;

    cout << "Покупець дає, грн: " << paid << endl;
    cout << "Решта, грн: " << change << endl;
    cout << "Купюр по 100 грн: " << n100 << endl;
    cout << "Купюр по 50 грн: " << n50 << endl;
    cout << "Монет по 10 грн: " << n10 << endl;
    cout << "Монет по 1 грн: " << n1 << endl;


    //double priceA, priceB, percent, delivery;
    //int qtyA, qtyB;
    //cout << "Ціна і кількість товару A: ";
    //cin >> priceA >> qtyA;
    //cout << "Ціна і кількість товару B: ";
    //cin >> priceB >> qtyB;
    //cout << "Знижка, %: ";
    //cin >> percent;
    //cout << "Доставка, грн: ";
    //cin >> delivery;

  

    //double sum = priceA * qtyA + priceB * qtyB;
    //double discount = sum * percent / 100;
    //double total = sum - discount + delivery;
    //double vat = total * 20 / 120;

    //cout << fixed << setprecision(2);
    //cout << "Чек: Меблі «Дім»" << endl;
    //cout << "Товари, грн: " << sum << endl;
    //cout << "Знижка, грн: " << discount << endl;
    //cout << "До сплати, грн: " << total << endl;
    //cout << "У т. ч. ПДВ, грн: " << vat << endl;


    //24.11.2026
    // 
    
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

    //int price, qty;
    //cin >> price >> qty;
    //cout << "Вартість: " << price * qty << endl;


    return 0;
}