//3333333333333333333333333333333333333333333333333333333333333333333
#include<iostream>
#include<Windows.h>
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    system("chcp 1251");

    srand(time(NULL));
    int first = 0, last = 0;
    int max = 0, min = 0, nom1, nom2;
    const int size = 12;
    int mon[size];
    for (int i = 1;i <= size;i++)
    {
        std::cout << "Введите прибыль за месяц ";
        std::cout << " N " << i << ":";
        std::cin >> mon[i - 1];
        std::cout << std::endl;
    }
    std::cout << "Введите 1ый месяц из диапозона:";
    std::cin >> first;
    std::cout << std::endl;
    std::cout << "Введите последний месяц из диапозона:";
    std::cin >> last;
    std::cout << std::endl;
    while (first < 1 || first > last || last > size)
    {
        if (first < 1 || first > last)
        {
            std::cout << "Номер первого месяца не может быть меньше чем 1  ,\n ";
            std::cout << " или больше последнего из диапозона";
            std::cout << "Попробуйте еще раз :";
            std::cin >> first;
        }
        else if (last > size)
        {
            std::cout << "Номер последнего месяца не может быть больше чем " << size;
            std::cout << "Попробуйте еще раз :";
            std::cin >> last;
        }
    }
    min = mon[first - 1];
    max = mon[first - 1];
    nom1 = first;
    nom2 = first;
    for (int i = first; i <= last;i++)
    {

        if (mon[i - 1] < min)
        {
            min = mon[i - 1];
            nom1 = i;
        }
        else if (mon[i - 1] > max)
        {
            max = mon[i - 1];
            nom2 = i;
        }
    }
    std::cout << "\nМаксимальная прибыль за месяц под номером " << nom2 << ":\t" << max << "\n";
    std::cout << "Минимальная прибыль за месяц под номером " << nom1 << ":\t" << min << "\n";



    return 0;
}