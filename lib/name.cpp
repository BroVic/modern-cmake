#include "name.h"

Name::Name()
{
	m_firstName = "Victor";
	m_surname = "Ordu";
}


void Name::getFullName(std::string& fullName)
{
	fullName = m_firstName;
	fullName += " ";
	fullName += m_surname;
}