#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
public:
    Student(std::string n) : name(n) {}
};

class AcademicPerformance : public Student {
protected:
    float cgpa;
public:
    AcademicPerformance(std::string n, float c) : Student(n), cgpa(c) {}
};

class GraduationHonors : public AcademicPerformance {
public:
    GraduationHonors(std::string n, float c) : AcademicPerformance(n, c) {}
    void determineHonors() {
        std::cout << "Student: " << name << " - CGPA: " << cgpa << " - Status: ";
        if (cgpa >= 3.8) {
            std::cout << "Summa Cum Laude\n";
        } else if (cgpa >= 3.5) {
            std::cout << "Magna Cum Laude\n";
        } else {
            std::cout << "Graduated\n";
        }
    }
};

int main() {
    GraduationHonors student1("Alice", 3.9);
    student1.determineHonors();
    return 0;
}