#include <iostream>
#include "lab1.h"
#include "lab2.h"
#include "lab3.h"
#include "lab4.h"

int main() {
    int choice;

    do {
        system("cls");
        std::cout << "Меню:" << std::endl;
        std::cout << "1. Лабораторная работа #1" << std::endl;
        std::cout << "2. Лабораторная работа #2" << std::endl;
        std::cout << "3. Лабораторная работа #3" << std::endl;
        std::cout << "4. Лабораторная работа #4" << std::endl;
        std::cout << "5. Выход" << std::endl;

        do {
            std::cout << "Выберите пункт меню (1-5): ";
            std::cin >> choice;
            switch (choice) {
                case 1:
                    system("cls");
                    run_lab_1();
                break;
                case 2:
                    system("cls");
                    run_lab_2();
                break;
                case 3:
                    system("cls");
                    run_lab_3();
                break;
                case 4:
                    system("cls");
                    run_lab_4();
                break;
                case 5:
                    std::cout << "Выход из программы." << std::endl;
                break;
                default:
                    std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
            }
        } while (choice > 5);

        std::cout << std::endl;

    } while (choice != 5);

    return 0;
}
