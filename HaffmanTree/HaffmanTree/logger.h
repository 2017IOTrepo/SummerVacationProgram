#ifndef LOGGER_H
#define LOGGER_H

#include <QDebug>
#include <QString>

template <typename T>
void debug_inline(T content) {
    qDebug() << content << endl;
}

#endif // LOGGER_H
