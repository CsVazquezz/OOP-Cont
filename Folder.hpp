#include <iostream>
#include <vector>
#include <algorithm>

class Folder { // Clase de Folder 

private: //atributos privados que son nombre, año y tipo
    std::string name;
    int year;
    std::string type;

public:
    Folder(std::string name, int year, std::string type) //Constructor para inicializar el folder con el nombre, año y typo dados
        : name(name), year(year), type(type) {}

    // Getters para acceder a los miembros privados
    std::string getName() const { return name; }
    int getYear() const { return year; }
    std::string getType() const { return type; }


};

class FolderOrganizer {
public:
    void addFolder(const Folder& folder) { //agrega folder al vector con metodo .push_back
        folders.push_back(folder);
    }

    static bool compareByYear(const Folder& a, const Folder& b) {
        return a.getYear() < b.getYear();
    }

    static bool compareByName(const Folder& a, const Folder& b) {
        return a.getName() < b.getName();
    }

    static bool compareByType(const Folder& a, const Folder& b) {
        return a.getType() < b.getType();
    }

    void organizeByYear() {
        std::sort(folders.begin(), folders.end(), compareByYear);
    }

    void organizeByName() {
        std::sort(folders.begin(), folders.end(), compareByName);
    }

    void organizeByType() {
        std::sort(folders.begin(), folders.end(), compareByType);
    }

    void displayFolders() const {
        for (const auto& folder : folders) {
            std::cout << "Name: " << folder.getName()
                      << ", Year: " << folder.getYear()
                      << ", Type: " << folder.getType() << std::endl;
        }
    }

private:
    std::vector<Folder> folders;
};
