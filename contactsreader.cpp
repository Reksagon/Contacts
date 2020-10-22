#include "contactsreader.h"


namespace  {

const std::vector<Contact> mockData {
    {"Will", "Smit", "380504563322"},
    {"Jesica", "Jonson", "380685553212"},
    {"Bred", "Pitt", "380971245442"},
    {"Lionel", "Messi", "380637562145"},
    {"Oleksei", "Potapenko", "380671234567"}
};

}

std::pair<bool, std::vector<Contact> > ContactsReader::requestContactsBrowse()
{
    return std::make_pair(true, mockData);
}
