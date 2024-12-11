#ifndef UNTITLED1_BOOK_H
#define UNTITLED1_BOOK_H
#include<iostream>
#include<string>
#include<vector>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"
using namespace std;
class Book{
    private:
    std::string title;
    Author author;
    int publicationYear;
    std::vector <Chapter> chapters;
    public:
    Book()
    : title(""), author(Author()), publicationYear(0) {};
    Book(const string &bookTitle, const Author &bookAuthor, int year, const vector<Chapter>& bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {};

    void addChapter(const Chapter &chapter){
        chapters.push_back(chapter);
    }

    void displayInfo() const{
    std::cout << "Book: " << title << " by " << author.toString() << " (" << publicationYear << ")" << endl;
        for (const Chapter &chapter: chapters) {
            chapter.displayInfo();
        }
    }

    const string &getTitle() const{
        return title;
    }

    const Author &getAuthor() const{
        return author;
    }

    int getPublicationYear() const{
        return publicationYear;
    }

    const vector<Chapter> &getChapters() const{
        return chapters;
    }

};
#endif