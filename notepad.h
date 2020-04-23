#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QObject>

class Notepad : public QObject
{
    Q_OBJECT
public:
    explicit Notepad(QObject *parent = nullptr);
    void run();

signals:

};

#endif // NOTEPAD_H
