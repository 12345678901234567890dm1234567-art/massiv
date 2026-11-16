//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
#include <iostream>  // задание N2
#include <Windows.h>
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    system("chcp 1251");
    srand(time(NULL));
    const int size = 10;
    int zif[size];
    int first, last, sum = 0;
    for (int i = 0;i < size;i++)
    {
        zif[i] = rand() % 101 + 1;
        int d = i + 1;
        std::cout << "n" << d << "." << zif[i] << ";";
    }
    std::cout << "Введите порядковые номера начального";
    std::cout << " числа ряда , сумму элементов которого хотите найти :";
    std::cin >> first;
    while (first < 1 || first > size)
    {
        std::cout << ".";
        std::cin >> first;
    }
    std::cout << "Введите порядковый номер крайнего";
    std::cout << " числа ряда , сумму элементов которого хотите найти :";
    std::cin >> last;
    while (last < 1 || last > size || last < first)
    {
        std::cout << "последнего, не раньше первого и не больше начального";
        std::cin >> last;
    }
    for (int i = first;i <= last;i++)
    {
        sum += zif[i - 1];
    }
    std::cout << sum;
    return 0;
}