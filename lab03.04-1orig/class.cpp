#include "class.h"
Stud::Stud() :
    firstName(""), lastName(""), score1(0), score2(0), score3(0)
{}
Stud::Stud(std::string tempFirstName, std::string tempLastName, int tempsc1, int tempsc2, int tempsc3) :
    score1(tempsc1),
    score2(tempsc2),
    score3(tempsc3)
{
    strcpy_s(firstName, 50, tempFirstName.c_str());
    strcpy_s(lastName, 50, tempLastName.c_str());
}
Stud::~Stud()
{
    std::cout << "Destructor called" << std::endl;
}
void Stud::printStud() {
    std::cout << std::setw(10) << firstName << std::setw(10) << lastName << std::setw(4) << score1 << std::setw(4) << score2 << std::setw(4) << score3 << std::endl;
}
void Stud::studFromConsole() {
    std::cout << "Имя: "; std::cin >> firstName;
    std::cout << "Фамилия: "; std::cin >> lastName;
    std::cout << "1 предмет "; std::cin >> score1;
    std::cout << "2 предмет: "; std::cin >> score2;
    std::cout << "3 предмет: "; std::cin >> score3;
}
std::istream& operator >> (std::istream& in, Stud& S) {
    in >> S.lastName;
    in >> S.firstName;
    in >> S.score1; 
    in >> S.score2;
    in >> S.score3; 
    return in;
}
std::ostream& operator << (std::ostream& out, Stud& S) {
    return out << std::setw(10) << S.lastName << std::setw(10) <<
        S.firstName << std::setw(4) << S.score1 << std::setw(4) <<
        S.score2 << std::setw(4) << S.score3 << std::endl;
}