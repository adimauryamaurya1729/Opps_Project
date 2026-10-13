#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
public:
    Person(std::string n) : name(n) {}
};

class Teacher : virtual public Person {
protected:
    std::string department;
public:
    Teacher(std::string n, std::string d) : Person(n), department(d) {}
};

class Student : virtual public Person {
protected:
    int studentID;
public:
    Student(std::string n, int id) : Person(n), studentID(id) {}
};

class TeachingAssistant : public Teacher, public Student {
public:
    TeachingAssistant(std::string n, std::string d, int id) 
        : Person(n), Teacher(n, d), Student(n, id) {}
        
    void displayRecord() {
        std::cout << "Teaching Assistant Record\n"
                  << "Name: " << name << "\n"
                  << "Department: " << department << "\n"
                  << "Student ID: " << studentID << "\n";
    }
};

int main() {
    TeachingAssistant ta("Bob", "Computer Science", 10455);
    ta.displayRecord();
    return 0;
}