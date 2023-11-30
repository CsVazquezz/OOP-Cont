#include <iostream>

class Person {

    protected:
    std::string name;
    int age;
    std::string gender;
    std::string number;

    public:
    Person(std::string name, int age, std::string gender, std::string number) //Constructor para inicializar el folder con el nombre, año y typo dados
        : name(name), age(age), gender(gender), number(number) {}

    // Getters para acceder a los miembros privados
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getGender() const { return gender; }
    std::string getNumber() const { return number; }

    // Setters para modificar los miembros privados
    void setInfo( const std::string& newName, int newAge, const std::string& newGender, const std::string& newNumber) {
        name = newName;
        age = newAge;
        gender = newGender;
        number = newNumber;
    }

};

//Implementacion de herencia en de Person a Client y Employee

class Client : public Person {
public:
    Client(std::string name, int age, std::string gender, std::string number)
        : Person(name, age, gender, number) {}

    std::string getInfo() const {
        std::string bio;
        bio += "\nName:  " + name;
        bio += "\nAge:  " + std::to_string(age);
        bio += "\nGender:  " + gender;
        bio += "\nNumber:  " + number;

        return bio;
    }
    
};

class Employee : public Person {
public:
    Employee(std::string name, int age, std::string gender, std::string number)
        : Person(name, age, gender, number) {}

    std::string getInfo() const {
        std::string bio;
        bio += "\nName:  " + name;
        bio += "\nAge:  " + std::to_string(age);
        bio += "\nGender:  " + gender;
        bio += "\nNumber:  " + number;

        return bio;
    }
   
};

class Despacho {

    protected: 
    std::vector<Client> clients;
    std::vector<Employee> employees;

};

