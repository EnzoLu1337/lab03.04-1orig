#pragma once
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
class Stud
{
private:
    char firstName[50];
    char lastName[50];
    unsigned int score1;
    unsigned int score2;
    unsigned int score3;
public:
    Stud();
    Stud(std::string tempFirstName, std::string tempLastName, int tempsc1, int tempsc2, int tempsc3);
    void SetLastName(std::string str) { strcpy_s(lastName, 50, str.c_str()); }
    void SetName(std::string str) { strcpy_s(firstName, 50, str.c_str()); }
    void Setsc1(int data) { score1 = data; }
    void Setsc2(int data) { score2 = data; }
    void Setsc3(int data) { score3 = data; }
    std::string GetFirstName() { return firstName; }
    std::string GetLastName() { return lastName; }
    const int Getsc1() { return score1; }
    const int Getsc2() { return score2; }
    const int Getsc3() { return score3; }
    const int Gettotalsc() { return score1 + score2 + score3; }
    friend std::ostream& operator<<(std::ostream& out, Stud& S);
    friend std::istream& operator>>(std::istream& in, Stud& S);

};