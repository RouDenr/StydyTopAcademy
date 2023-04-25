#include <iostream>

void input_n(int *n) {
    std::cout << "Введите число от 15 до 45 ";
    std::cin >> *n;

    if (*n < 15 || *n > 45) {
        throw "Input error!";
    }
}

void del_func(int *n) {
    int m;
    std::cout << "Введите";
    std::cin >> m;
    // if (m == 0)
    //     throw 0;
    std::cout  << "n/m =" << *n / m;
}

int main(int argc, char const *argv[])
{

    int *n = new int();
    const int cap = 15;
    int mass[cap] = {1,2,3,4,5};
    int size = 5;


    std::cout << "Выберите команду \n";
    std::cout << "3. Вывод массива \n";
    std::cout << "4. Поиск элемена \n";
    std::cout << "5. Удаление элемента элемена по значению \n";
    std::cout << "6. Добавление элемента\n";
    std::cout << "6. Удаление элемента элемена по индексу \n";
    std::cout << "-1. Выход \n";
    std::cout << " : ";

    try {
        input_n(n);
        del_func(n);
    } catch (const char *error) {
        delete n;
        std::cout << error << "\n";
    } catch (...) {
        std::cout << "Error\n";
    }

    //
    //  ...
    //

    return 0;
}
