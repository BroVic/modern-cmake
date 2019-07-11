#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED

#include <string>

class Name
{
private:
    std::string m_firstName;
    std::string m_surname;

public:
    Name();
    void getFullName(std::string&);
	
};

#endif //!NAME_H_INCLUDED