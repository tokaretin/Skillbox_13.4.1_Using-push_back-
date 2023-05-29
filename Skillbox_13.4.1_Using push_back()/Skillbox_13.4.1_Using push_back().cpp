/*Задание 1
С помощью push_back() реализуйте очередь из роботов-андроидов. Роботы приходят в очередь 
и называют(вводят с клавиатуры) свои порядковые номера (целые положительные). Последний робот 
в очереди всегда имеет номер -1. Когда он пришёл, необходимо вывести на экран все номера в очереди.*/

#include <iostream>
#include <vector>

int main()
{    
    std::vector<int> vec;
    int number;

    while (true)
    {
        std::cout << "Робот введи свой порядковый номер: ";
        std::cin >> number;
        
        if (number == -1) break;
        vec.push_back(number);
    }

    std::cout << "The line of robots: " << '\n';
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "Робот " << i + 1 << ": " << vec[i] << '\n';
    }
}
