#pragma once
#include <QString>

class Contact
{
public:
    Contact();
    Contact(QString firstName, QString secondName, QString phone);
    QString phone() const;
    QString firstName() const;
    QString secondName() const;

private:
    QString m_phone;
    QString m_firstName;
    QString m_secondName;

};


