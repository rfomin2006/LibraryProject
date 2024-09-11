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
        std::cout << "Меню:\n";
        std::cout << "1. Добавить книгу\n";
        std::cout << "2. Удалить книгу\n";
        std::cout << "3. Найти книгу\n";
        std::cout << "4. Показать все книги\n";
        std::cout << "5. Выйти\n";
        std::cout << "Выберите опцию: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cin.ignore();
            book book;
            std::string buffer;
            std::cout << "Введите название книги: ";
            std::getline(std::cin, book.title);
            std::cout << "Введите автора книги: ";
            std::getline(std::cin, book.author);
            std::cout << "Введите год издания: ";
            std::cin >> book.year;
            if (!std::cin) { std::cout << "Год должен быть числом!\n"; continue; }
            std::cin.ignore();
            std::cout << "Введите жанр книги: ";
            std::getline(std::cin, book.genre);
            library.add_book(book);
        }
        else if (choice == 2) {
            std::string title;
            std::cin.ignore();
            std::cout << "Введите название книги: ";
            std::getline(std::cin, title);
            library.remove_book(title);
        }
        else if (choice == 3) {
            std::string title;
            std::cin.ignore();
            std::cout << "Введите название книги: ";
            std::getline(std::cin, title);
            book* finded_book = library.find_book(title);

            finded_book == nullptr
                ? std::cout << "Книга не найдена"
                : std::cout << "Найдена книга: " << finded_book->title << "\n"
                << "Автор: " << finded_book->author << "\n"
                << "Год: " << finded_book->year << "\n"
                << "Жанр: " << finded_book->genre << "\n";
        }
        else if (choice == 4) {
            std::cin.ignore();
            library.list_books();
        }
        else break;
    };

    return 0;
}
