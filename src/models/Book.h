#ifndef BOOK_H
#define BOOK_H

#include <QDateTime>
#include <QString>

struct Book
{
    int id;

    QString cover;
    QString title;
    QString author;
    QString publisher;
    int publication_year = 0;
    QString genre;
    QString status;
    int number_pages = 0;
    QString synopsis;
    QString personal_summary;
    float value;
    QString type_purchased;

    QDateTime created_at;
    QDateTime updated_at;

    void clear() { *this = Book(); }
};

#endif // BOOK_H