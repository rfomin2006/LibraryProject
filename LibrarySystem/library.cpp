#include <iostream>
#include "library.h"

void library::add_book(book book) {
    this->books.push_back(book);
}

void library::remove_book(std::string title) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->title == title) {
            this->books.erase(it);
            return;
        }
    }
}

book* library::find_book(std::string title) {
    for (auto& book : books) {
        if (book.title == title) {
            return &book;
        }
    }
    return nullptr;
}

void library::list_books() {
    if (books.empty()) {
        return;
    }
    std::cout << "Список книг в библиотеке:\n";
    for (const auto& book : books) {
        std::cout << "Название: " << book.title << " Автор: " << book.author << " Год: " << book.year << " Жанр: " << book.genre << std::endl;
    }
}
