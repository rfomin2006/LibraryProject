#include <iostream>
#include "library.h"
#include "writer.h"
#include <locale>
#include <Windows.h>

int main() {
    std::setlocale(LC_ALL, "ru-RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    library library;
    writer writer;

    while (true) {
        int choice = 0;
        std::cout << "����:\n";
        std::cout << "1. �������� �����\n";
        std::cout << "2. ������� �����\n";
        std::cout << "3. ����� �����\n";
        std::cout << "4. �������� ��� �����\n";
        std::cout << "5. �����\n";
        std::cout << "�������� �����: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cin.ignore();
            book book;
            std::string buffer;
            std::cout << "������� �������� �����: ";
            std::getline(std::cin, book.title);
            std::cout << "������� ������ �����: ";
            std::getline(std::cin, book.author);
            std::cout << "������� ��� �������: ";
            std::cin >> book.year;
            if (!std::cin) { std::cout << "��� ������ ���� ������!\n"; continue; }
            std::cin.ignore();
            std::cout << "������� ���� �����: ";
            std::getline(std::cin, book.genre);
            library.add_book(book);
        }
        else if (choice == 2) {
            std::string title;
            std::cin.ignore();
            std::cout << "������� �������� �����: ";
            std::getline(std::cin, title);
            library.remove_book(title);
        }
        else if (choice == 3) {
            std::string title;
            std::cin.ignore();
            std::cout << "������� �������� �����: ";
            std::getline(std::cin, title);
            book* finded_book = library.find_book(title);

            finded_book == nullptr
                ? std::cout << "����� �� �������"
                : std::cout << "������� �����: " << finded_book->title << "\n"
                << "�����: " << finded_book->author << "\n"
                << "���: " << finded_book->year << "\n"
                << "����: " << finded_book->genre << "\n";
        }
        else if (choice == 4) {
            std::cin.ignore();
            library.list_books();
        }
        else break;
    };

    return 0;
}
