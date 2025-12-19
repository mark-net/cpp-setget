//
//  by mark https://github.com/mark-net/cpp-setget
//

#include <iostream>
#include <string>

using namespace std;

class User {
private:
    int id;
    string name;
public:
    User() : id(0), name("") {};

    void setId(int newId) {
        id = newId;
    }

    void setName(const string& newName) {
        name = newName;
    }

    int getId() const {
        return id;
    }

    const string& getName() const {
        return name;
    }
};

int main() {
    User mark;

    mark.setName("mark");
    mark.setId(0);

    cout << "Имя: " << mark.getName() << endl;
    cout << "ID: " << mark.getId() << endl;

    return 0;
}
