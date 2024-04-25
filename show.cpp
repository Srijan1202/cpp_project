#include <iostream>
#include <string>

using namespace std;

class ZooManager {
public:
    void chooseShow() {
        int choice;
        cout << "\nChoose a show:\n";
        cout << "1. Dolphin Show\n";
        cout << "2. Safari Adventure\n";
        cout << "3. Panda Show\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                showDolphinShow();
                break;
            case 2:
                showSafari();
                break;
            case 3:
                showPandaShow();
                break;
            default:
                cout << "Invalid choice. Please select 1, 2, or 3.\n";
        }
    }

private:
    void showDolphinShow() {
        cout << "Welcome to the Dolphin Show!\n";
        cout << "Our talented dolphins will perform amazing tricks.\n";
    }

    void showSafari() {
        cout << "Welcome to the Safari Adventure!\n";
        cout << "Hop on our safari jeep and explore the wild animals.\n";
    }

    void showPandaShow() {
        cout << "Welcome to the Panda Show!\n";
        cout << "Watch our adorable pandas play and eat bamboo.\n";
    }
};

int main() {
    ZooManager zoo;
    zoo.chooseShow();

    return 0;
}
