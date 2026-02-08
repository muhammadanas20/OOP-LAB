#include "Book.h"

// Setters
void Book::setTitle(string t) {
    title = t;
}

void Book::setAuthor(string a) {
    author = a;
}

void Book::setPages(int p) {
    pages = p;
}

// Getters
string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getPages() const {
    return pages;
}
