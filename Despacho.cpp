#include <iostream>
#include <vector>
#include <algorithm>
#include "Cliente.hpp"
#include "Folder.hpp"


void menu1() { // impresion del primer menu

    std::cout << "\n1. Clients\n";
    std::cout << "2. Employees\n";
    std::cout << "3. Folders\n";
    std::cout << "4. Modify Client or Employee info\n";
    std::cout << "5. Quit\n\n";
}
void menu2() { // al elegir la opcion 3 del "menu 1" despliega esta

    std::cout << "1. Organize by year\n";
    std::cout << "2. Organize by name\n";
    std::cout << "3. Organize by type\n";
    std::cout << "4. Quit\n";
}

int main() { //incion del main
    int opcion1;
    int opcion2;
    bool continua = true; //inicializacion de variables para el bucle 


    Client Client1("Carlos Martinez", 18, "male", "55 1234 5678"); //Clientes del despacho
    Client Client2("DongJu Mun", 18, "male", "55 4321 8921" );

    Employee Employee1("Joshua Torres", 18, "male", "55 9876 5432"); //Empleados del despacho
    Employee Employee2("Max Salcedo", 18, "male", "55 6789 4321");

    Folder folder1("Folder A", 2020, "Documents"); //Folders del despacho
    Folder folder2("Folder B", 2019, "Pictures");
    Folder folder3("Folder C", 2021, "Videos");
    Folder folder4("Folder D", 2022, "Documents");
    Folder folder5("Folder E", 2023, "Pictures");
    Folder folder6("Folder F", 2021, "Videos");

    std::vector<Client> clients = { //vector para modificar los clientes
        {"Carlos Martinez", 18, "male", "55 1234 5678" },
        {"DongJu Mun", 18, "male", "55 4321 8921" }
        
    };

    std::vector<Employee> employees = { //vector para modificar los empleados
        {"Joshua Torres", 18, "male", "55 9876 5432"},
        {"Max Salcedo", 18, "male", "55 6789 4321"}
    
    };
    
    FolderOrganizer organizer;
    organizer.addFolder(folder1);
    organizer.addFolder(folder2);
    organizer.addFolder(folder3);
    organizer.addFolder(folder4);
    organizer.addFolder(folder5);
    organizer.addFolder(folder6);

    while (continua == true) { //inicializacion del bucle para seguir ejecutando programa hasta seleccionar salir
        menu1();
        std::cout << "Select an option from the menu: ";
        std::cin >> opcion1;
        std::cout << "\n";

        if (opcion1 == 1) {
                std::cout << "\nClient info: ";
                std::cout << Client1.getInfo() << "\n";
                std::cout << Client2.getInfo() << "\n";
                
        } // finaliza 1

            else if (opcion1 == 2) {

                std::cout << "\nEmployee info: ";
                std::cout << Employee1.getInfo() << "\n";     
                std::cout << Employee2.getInfo() << "\n";   
            } // finaliza 2

            else if (opcion1 == 3) {

                menu2();
                std::cout << "\nSelect an option from the menu: ";
                std::cin >> opcion2;
                std::cout << "\n";

                switch (opcion2) {
                    case 1:
                        std::cout << "Organizing by Year:" << std::endl;
                        organizer.organizeByYear();
                        organizer.displayFolders();
                        break;
                    case 2:
                        std::cout << "\nOrganizing by Name:" << std::endl;
                        organizer.organizeByName();
                        organizer.displayFolders();
                        break;
                    case 3:
                        std::cout << "\nOrganizing by Type:" << std::endl;
                        organizer.organizeByType();
                        organizer.displayFolders();
                        break;
                    case 4:
                        std::cout << "Goodbye" << std::endl;
                        continua = false;
                        break;

                    default:
                        std::cout << "Invalid option, please select another one\n";
                        break;
                    }             } // finaliza 3

                    
                    else if (opcion1 == 4) {

                    std::string targetType;
                    std::cout << "Enter 'client' or 'employee' to specify what you want to modify: ";
                    std::cin >> targetType;

                    std::string targetName;
                    std::cout << "Enter the name of the " << targetType << " you want to modify: ";
                    std::cin.ignore();  
                    std::getline(std::cin, targetName);


                    // Busca y modifica 
                    if (targetType == "client") {
                        auto it = std::find_if(clients.begin(), clients.end(),
                                            [&](const Client& client) { return client.getName() == targetName; });

                        if (it != clients.end()) {
                            std::cout << "Original " << targetType << " info: " << it->getInfo() << std::endl;

                            // Pide las modificaciiones
                            std::string newName, newGender, newNumber;
                            int newAge;

                            std::cout << "Enter new name: ";
                            std::getline(std::cin, newName);

                            std::cout << "Enter new age: ";
                            std::cin >> newAge;
                            std::cin.ignore(); 

                            std::cout << "Enter new gender: ";
                            std::getline(std::cin, newGender);

                            std::cout << "Enter new number:\n";
                            std::getline(std::cin, newNumber);

                            
                            it->setInfo(newName, newAge, newGender, newNumber);
                            std::cout << "Modified " << targetType << " info: " << it->getInfo() << std::endl;
                        } else {
                            std::cout << targetType << " not found." << std::endl;
                        }
                    } else if (targetType == "employee") {
                        auto it = std::find_if(employees.begin(), employees.end(),
                                            [&](const Employee& employee) { return employee.getName() == targetName; });

                        if (it != employees.end()) {
                            std::cout << "Original " << targetType << " info: " << it->getInfo() << std::endl;

                            // Pregunta por las modificaciones
                            std::string newName, newGender, newNumber;
                            int newAge;

                            std::cout << "Enter new name: ";
                            std::getline(std::cin, newName);

                            std::cout << "Enter new age: ";
                            std::cin >> newAge;
                            std::cin.ignore();  

                            std::cout << "Enter new gender: ";
                            std::getline(std::cin, newGender);

                            std::cout << "Enter new number:\n";
                            std::getline(std::cin, newNumber);

                            // Apply modifications
                            it->setInfo(newName, newAge, newGender, newNumber);
                            std::cout << "Modified " << targetType << " info: " << it->getInfo() << std::endl;
                        } else {
                            std::cout << targetType << " not found." << std::endl;
                        }
                    } else {
                        std::cout << "Invalid target type." << std::endl;
                     } } //finaliza 4

                else if (opcion1 == 5) {
                    std::cout << "Goodbye" << std::endl;
                    continua = false;
                } //finaliza 5

                else {
                    std::cout << "Invalid option, please select another one\n";
                }
        }

    return 0;
    }

    
