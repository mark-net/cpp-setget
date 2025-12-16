//
// by mark
//

#include <string>
#include <iostream>

using namespace std;

class User {
private:
    string name;
    int id;
    string hash;
    string bio;

public:
    User() : name(""), id(0), hash(""), bio("") {};

    // УЛУЧШЕННЫЕ СЕТТЕРЫ
    void setName(const string& newName) {
        name = newName;
    }

    void setId(int newId) {
        id = newId;
    }

    void setHash(const string& newHash) {
        hash = newHash;
    }

    void setBio(const string& newBio) {
        bio = newBio;
    }

    // УЛУЧШЕННЫЕ ГЕТТЕРЫ
    const string& getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    const string& getHash() const {
        return hash;
    }

    const string& getBio() const {
        return bio;
    }
};

int main() {
    User root;

    // Устанавливаем через сеттеры
    root.setName("root");
    root.setId(0);
    root.setHash("5feceb66ffc86f38d952786c6d696c79c2dbc239dd4e91b46729d73a27fb57e9");
    root.setBio("био история крутого программиста лид архитекта");

    // Получаем через геттеры
    cout << "Имя: " << root.getName() << endl;
    cout << "ID: " << root.getId() << endl;
    cout << "Хэш: " << root.getHash() << endl;
    cout << "BIO: " << root.getBio() << endl;
    
    return 0;
}
