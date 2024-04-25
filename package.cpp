#include <iostream>
#include <string>

using namespace std;

class ZooPackage {
public:
    void selectPackage() {
        int choice;
        cout << "Choose a package:\n";
        cout << "1. Mammal Package\n";
        cout << "2. Reptile Package\n";
        cout << "3. Aquatic Package\n";
        cout << "4. Panda Package\n";
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                showMammalPackage();
                break;
            case 2:
                showReptilePackage();
                break;
            case 3:
                showAquaticPackage();
                break;
            case 4:
                showPandaPackage();
                break;
            default:
                cout << "Invalid choice. Please select 1, 2, 3, or 4.\n";
        }
    }

private:
    void showMammalPackage() {
        cout << "Mammal Package:\n";
        cout << "Enjoy close encounters with various mammals in our zoo!\n";
    }

    void showReptilePackage() {
        cout << "Reptile Package:\n";
        cout << "Explore the fascinating world of reptiles and learn about their unique adaptations.\n";
    }

    void showAquaticPackage() {
        cout << "Aquatic Package:\n";
        cout << "Dive into our aquatic exhibits and discover marine life from oceans and rivers.\n";
    }

    void showPandaPackage() {
        cout << "Panda Package:\n";
        cout << "Get up close with adorable pandas and witness their playful antics.\n";
    }
};

int main() {
    ZooPackage zoo;
    zoo.selectPackage();

    return 0;
}
