#include <iostream>  // задание N3
#include <Windows.h>
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    system("chcp 1251");

    const int size = 12;

    int pribl[size], minpribl=0,maxpribl=0,first,last,nombermax,nombermin;

    std::cout << "Введите прибыль за каждый месяц отдельно за 1 год";

    for (int i = 0; i < size; i++)
    {
        std::cout << "\tприбыль за  " << i + 1 << " месяц ";

        std::cin >> pribl[i];
    }
    std::cout << "\nКакой интервал вас интересует?\n" << "от :";

    std::cin >> first;
    
    if (first < 1)
    {
        std::cout << "Некоректно введен номер первого числа, попробуйте еще раз:";
        std::cin >> first;
    }
    else if (first > size)
    {
        std::cout << "Некоректно введен номер первого числа, попробуйте еще раз:";

        std::cin >> first;
    }
    std::cout << "\nдо :";

    std::cin >> last;

    if (last < first)
    {
        std::cout << "Некоректно введен номер посдуднего числа, попробуйте еще раз:";
        std::cin >> last;
    }
    else if (last > size)
    {
        std::cout << "Некоректно введен номер посдуднего числа, попробуйте еще раз:";
        std::cin >> last;
    }
    nombermin = nombermax = first;
    for (int i = first-1; i < last; i++)
    {
            
        if (pribl[i] <= minpribl)
        {
            minpribl = pribl[i];
            nombermin = i + 1;
        }
        else if (pribl[i] >= maxpribl)
        {
            maxpribl = pribl[i];
            nombermax = i + 1;
        }

    }

    std::cout << "Максимальная прибыль в " << nombermax << "м месяце составляет" << maxpribl;
    std::cout << "\nМинимальная прибыль в " << nombermin << "м месяце составляет" << minpribl;

    return 0;
}
/*
// 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
#include <iostream>  // задание N1
#include <Windows.h>
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
     system("chcp 1251");
    const int size = 100;
    int zif[size];
    for (int i = 0; i < size; i++)
    {
        zif[i] = rand() % 101 + 1;
        std::cout << zif[i] << " ";
    }
    int mx = zif[0], mn = zif[0];
    for (int i = 0; i < size; i++)
    {
        if (zif[i] < mn)
        {
            mn = zif[i];
        }
        else if (zif[i] > mx)
        {
            mx = zif[i];
        }
       
      
    }
    std::cout << "\nМаксимальное число :" << mx << "\n";
    std::cout << "Минимальное число :" << mn << "\n";
    return 0;
}*/
/*#include <iostream>  // задание N2
#include <Windows.h>


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL))
        const int size = 100;

    int zif[size];
    int first, last, sum;

    for (int i = 0;i < size;i++)
    {

        std::cout << zif[i] << " ";
        zif[i] = rand() % 101 + 1;
    }
    std::cout << "Введите порядковые номера первого  ";
    std::cout << " числа ряда , сумму элементов которого хотите найти :";
    std::cin >> first;
    if (first < 1)
    {
        std::cout << "Некоректно введен номер первого числа, попробуйте еще раз:";
        std::cin >> first;
    }
    else if (first < size)
    {
        std::cout << "Некоректно введен номер первого числа, попробуйте еще раз:";

        std::cin >> first;
    }
    std::cout << "Введите порядковые номера последнего  "
        std::cout << " числа ряда , сумму элементов которого хотите найти :"
        std::cin >> last;
        if(last < first)
        {
        std::cout << "Некоректно введен номер посдуднего числа, попробуйте еще раз:";
        std::cin >> last
        }
    else if (last > size)
    {
        std::cout << "Некоректно введен номер посдуднего числа, попробуйте еще раз:";
        std::cin >> last;
    }

    for (int i = first;i <= last;i++)
    {
        sum += zif[i - 1];
    }
    std::cout <<"сумма элементов в выбранном диапозоне : " << sum;

    return 0;
}
*/









