#include <iostream>

// Если функция вернула отрицательное число
// То Это ошибка ввода пользователя
int input_n(int *n) {
    std::cout << "Введите число от 15 до 45";
    std::cin >> *n;

    if (*n < 15 || *n > 45) {
        return -1;
    }
    return 0;
}

int del_func(int *n) {
    int m;
    std::cout << "Введите";
    std::cin >> m;
    std::cout  << "n/m =" << *n / m;
}

int main(int argc, char const *argv[])
{

    int *n = new int();
    int return_val = 0;

    return_val = input_n(n);
    if (return_val < 0) {
        delete n;
        std::cout << "Error input!";
    } else {
        std::cout << "Ok!";
    }

    //
    //  ...
    //

    return 0;
}
