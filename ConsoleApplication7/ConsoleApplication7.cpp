﻿// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include "head.h"

int main() {
    setlocale(LC_ALL, "rus");
    int intNOD = NOD(24, 36);
    long longNOD = NOD(1234567890L, 9876543210L);
    float floatNOD = NOD(3.14f, 2.71f);
    double doubleNOD = NOD(3.14159265359, 2.71828182845);

    std::cout << "НОД для 24 и 36 (int): " << intNOD << std::endl;
    std::cout << "НОД для 1234567890 и 9876543210 (long): " << longNOD << std::endl;
    std::cout << "НОД для 3.14 и 2.71 (float): " << floatNOD << std::endl;
    std::cout << "НОД для 3.14159265359 и 2.71828182845 (double): " << doubleNOD << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.