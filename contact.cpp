#include "contact.h"

Contact::Contact()
{

}

Contact::Contact(QString firstName, QString secondName, QString phone)
    : m_phone{std::move(phone)},
      m_firstName{std::move(firstName)},
      m_secondName{std::move(secondName)}

{

}

QString Contact::phone() const
{
    return m_phone;
}

QString Contact::firstName() const
{
    return m_firstName;
}

QString Contact::secondName() const
{
    return m_secondName;
}
