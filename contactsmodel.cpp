#include "contactsmodel.h"
#include <QQmlEngine>
#include <QDebug>

ContactsModel::ContactsModel()
{
    const bool updateResult {updateContacts()};

    if (!updateResult){
        qWarning() << "Update contacts failed";
    }
}

void ContactsModel::registerMe(const std::string &moduleName)
{
    qmlRegisterType<ContactsModel>(moduleName.c_str(), 1, 0, "ContactsModel");
}

QHash<int, QByteArray> ContactsModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[ContactRoles::NameRole] = "name";
    roles[ContactRoles::SecondnameROle] = "surname";
    roles[ContactRoles::PhonenumberRole] = "phone";

    return roles;
}

int ContactsModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return static_cast<int>(m_contacts.size());
}

QVariant ContactsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() > rowCount(index))
    {
        return {};
    }

    const Contact& contact {m_contacts.at(index.row())};

    switch (role) {

    case ContactRoles:: NameRole:
    {
        return QVariant::fromValue(contact.firstName());
    }
    case ContactRoles:: SecondnameROle:
    {
        return QVariant::fromValue(contact.secondName());
    }
    case ContactRoles:: PhonenumberRole:
    {
        return QVariant::fromValue(contact.phone());
    }
defalt: {
    return true;
     }
    }
}

bool ContactsModel::updateContacts()
{
    bool requestResult {false};
    std::vector<Contact> contactsResult;
    std::tie(requestResult, contactsResult) = m_contactsReader.requestContactsBrowse();

    if(requestResult){
        m_contacts.swap(contactsResult);
        emit dataChanged(createIndex(0,0), createIndex(m_contacts.size(), 0));
    }

    return requestResult;
}
