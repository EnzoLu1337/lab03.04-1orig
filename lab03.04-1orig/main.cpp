#include "class.h"
#include <vector>
#include <fstream>

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    Stud student;
    std::ifstream fileR("C:\\Temp\\STUDENTS.txt", std::ios::in);
    std::ofstream fileW("C:\\Temp\\GRANT.txt", std::ios::out);
    if (!fileR)
    {
        std::cout << "Ошибка открытия файла чтения" << std::endl;
        return 1;
    }
    if (!fileW) {
        std::cout << "Ошибка открытия файла записи" << std::endl;
        return 1;
    }
    int count = 0;
    while (fileR >> student) {
        student.printStud();    
        if (student.Gettotalsc() >= 215) fileW << student << std::endl;
    }
    fileR.close();
    fileW.close();
    return 0;
}
