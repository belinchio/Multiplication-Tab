// Задача 4.
// Написать метод, который в консоль выводит таблицу умножения.
// На вход метод получает число, до которого выводит таблицу умножения.
// В консоли должна появиться таблица.

#include <iostream>

void multiplicationTable(int n) {
    
    std::cout << "    ";
    for (int i = 1; i <= n; ++i) {
        std::cout << i << "   ";
    }
    std::cout << std::endl;

    for (int i = 1; i <= n; ++i) {
        std::cout << i;
        if (i < 10) std::cout << "   ";
        else std::cout << "  ";
        for (int j = 1; j <= n; ++j) {
            std::cout << i * j;
            if ((i * j) < 10) {
                std::cout << "   ";
            } else std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int number;
    std::cout << "Введите число, до которого вывести таблицу умножения: ";
    std::cin >> number;

    multiplicationTable(number);

    return 0;

}