#include <iostream>
#include <string>
using namespace std;

int ticketm;
int choice1;
int choice2;
int foodprice;
int packprice;
int showprice;
class Person {
private:
    string address;
    string idNumber;

public:
    string name;
    string phoneNumber;
    string email;
    int nt;

    // Getter methods
    // string getAddress() const {
    //     return address;
    // }

    // string getIdNumber() const {
    //     return idNumber;
    // }

    void inputInfo() {
        cin.ignore();
        cout << "Enter your name: \n";
        getline(cin, name);

        cout << "Enter your phone number: \n";
        getline(cin, phoneNumber);

        cout << "Enter your address: \n";
        getline(cin, address);

        cout << "Enter your ID number: \n";
        getline(cin, idNumber);

        cout << "Enter your email: \n";
        getline(cin, email);

        cout << "Enter Number of tickets: \n";
        cin >> nt;
        ticketm=nt;
    }

    // Display method(checking input)
    // void displayInfo() {
    //     cout << "\nEntered Information:\n";
    //     cout << "Name: " << name << "\n";
    //     cout << "Phone Number: " << phoneNumber << "\n";
    //     cout << "Address: " << address << "\n";
    //     cout << "ID Number: " << idNumber << "\n";
    //     cout << "Email: " << email << "\n";
    //     cout << "Number of tickets: "
    // }
};


class Food : public Person {
private:
    char a;
public:
    Food(char a)
    {
        this->a = a;
    }
    void choose();
};

void Food::choose() {
    if (a == '1')
    {
        cout << "You have chosen Veg Food" << endl << "The price for your food is 600 per person\n";
    }
    else if (a == '2')
    {
        cout << "You have chosen Non-Veg Food" << endl << "The price for your food is 800 per person\n";
    }
    else if (a == '3')
    {
        cout << "You haven't chosen any food\n";
    }
}


class ZooPackage : public Person {
public:
    void selectPackage() {
        int choice;
        cout << "\nChoose a package:\n";
        cout << "1. Mammal Package\n";
        cout << "2. Reptile Package\n";
        cout << "3. Aquatic Package\n";
        cout << "4. Mammal Package and Reptile Package\n";
        cout << "5. Mammal Package and Aquatic Package\n";
        cout << "6. Reptile Package and Aquatic Package\n";
        cout << "7. ALL\n";
        cout << "Enter your choice (1, 2, 3, 4, 5, 6 or 7): \n";
        cin >> choice;
        choice1=choice;

        switch (choice) {
        case 1:
            show(1);
            break;
        case 2:
            show(1,1);
            break;
        case 3:
            show(1,2,3);
            break;
        case 4:
            show(1,'a');
            break;
        case 5:
            show('a','a');
            break;
        case 6:
            show(1,'a',1);
            break;
        case 7:
            showALL();
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, 3, 4, 5, 6, or 7.\n";
        }
    }

private:
    void show(int a) {
        cout << "Mammal Package:\n";
        cout << "Enjoy close encounters with various mammals in our zoo!\n";
        packprice=ticketm*100;
    }

    void show(int a,int b) {
        cout << "Reptile Package:\n";
        cout << "Explore the fascinating world of reptiles and learn about their unique adaptations.\n";
        packprice=ticketm*100;
    }

    void show(int a, int b,int c) {
        cout << "Aquatic Package:\n";
        cout << "Dive into our aquatic exhibits and discover marine life from oceans and rivers.\n";
        packprice=ticketm*100;
    }

    void show(int a, char c) {
        cout << "Mammal Package and ReptilePackage:\n";
        cout << "Enjoy close encounters with various mammals in our zoo!\n";
        cout << "Explore the fascinating world of reptiles and learn about their unique adaptations.\n";
        packprice=ticketm*200;
    }

    void show(char a , char b) {
        cout << "Reptile Package and Aquatic Package:\n";
        cout << "Enjoy close encounters with various mammals in our zoo!\n";
        cout << "Dive into our aquatic exhibits and discover marine life from oceans and rivers.\n";
        packprice=ticketm*200;
    }

    void show(int a, char b , int c) {
        cout << "ReptilePackage and Aquatic Package:\n";
        cout << "Explore the fascinating world of reptiles and learn about their unique adaptations.\n";
        cout << "Dive into our aquatic exhibits and discover marine life from oceans and rivers.\n";
        packprice=ticketm*200;
    }

    void showALL() {
        cout << "MEGA Package:\n";
        cout << "Enjoy close encounters with various mammals in our zoo!\n";
        cout << "Dive into our aquatic exhibits and discover marine life from oceans and rivers.\n";
        cout << "Get up close with adorable pandas and witness their playful antics.\n";
        packprice=ticketm*300;
    }
};


class Zooshow : public Person {
public:
    void chooseShow() {
        int choice;
        cout << "\nChoose a show:\n";
        cout << "1. Dolphin Show\n";
        cout << "2. Safari Adventure\n";
        cout << "3. Panda Show\n";
        cout << "4. Dolphin Show and Safari Adventure \n";
        cout << "5. Dolphin Show and Panda Show \n";
        cout << "6. Safari Adventure and Panda Show\n";
        cout << "7. ALL\n";
        cout << "Enter your choice (1, 2, 3, 4, 5, 6 or 7): \n";
        cin >> choice;
        choice2=choice;
        switch (choice) {
        case 1:
            show1(1);
            break;
        case 2:
            show1(1,1);
            break;
        case 3:
            show1(1,1,1);
            break;
        case 4:
            show1(1,'a');
            break;
        case 5:
            show1('a','b');
            break;
        case 6:
            show1(1,'b',1);
            break;
        case 7:
            showALL();
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, 3, 4, 5, 6 or 7.\n";
        }
    }

private:
    void show1(int a) {
        cout << "Welcome to the Dolphin Show!\n";
        cout << "Our talented dolphins will perform amazing tricks.\n";
        showprice=ticketm*100;
        cout<<ticketm;
    }

    void show1(int a,int b) {
        cout << "Welcome to the Safari Adventure!\n";
        cout << "Hop on our safari jeep and explore the wild animals.\n";
        showprice=ticketm*100;
    }

    void show1(int a,int b,int c) {
        cout << "Welcome to the Panda Show!\n";
        cout << "Watch our adorable pandas play and eat bamboo.\n";
        showprice=ticketm*100;
    }
    void show1(int a,char b) {
        cout << "Welcome to the Dolphin Show and Safari Adventure!\n";
        cout << "Our talented dolphins will perform amazing tricks.\n";
        cout << "Hop on our safari jeep and explore the wild animals.\n";
        showprice=ticketm*200;
    }

    void show1(char a,char b) {
        cout << "Welcome to the Safari Adventure and the Panda Show!!\n";
        cout << "Our talented dolphins will perform amazing tricks.\n";
        cout << "Watch our adorable pandas play and eat bamboo.\n";
        showprice=ticketm*200;
    }

    void show1(int a, char b,int c) {
        cout << "Welcome to Safari Adventure and the Panda Show!\n";
        cout << "Hop on our safari jeep and explore the wild animals.\n";
        cout << "Watch our adorable pandas play and eat bamboo.\n";
        showprice=ticketm*200;
    }
    void showALL(){
        cout << "Welcome to our ultimate pack!\n";
        cout << "Our talented dolphins will perform amazing tricks.\n";
        cout << "Hop on our safari jeep and explore the wild animals.\n";
        cout << "Watch our adorable pandas play and eat bamboo.\n";
        showprice=ticketm*300;
    }

};

    class Merchandise {
    public:
    string brand;
    string variety;
    string size;
    Merchandise(string _brand, string _variety, string _size)
    : brand(_brand), variety(_variety), size(_size) {}
    void display() {
    cout << "Brand: " << brand << endl;
    cout << "Variety: " << variety << endl;
    cout << "Size: " << size << endl;
    }
    };
    class Tshirt : public Merchandise {
    public:
    Tshirt(string _brand, string _size)
    : Merchandise(_brand, "Tshirt", _size) {}
    };
    class Hoodie : public Merchandise {
    public:
    Hoodie(string _brand, string _size)
    : Merchandise(_brand, "Hoodie", _size) {}
    };
    class CargoJoggers : public Merchandise {
    public:
    CargoJoggers(string _brand, string _size)
    : Merchandise(_brand, "Cargo Joggers", _size) {}
    };
    double calculateTotalBill(int tshirtCount, int hoodieCount, int cargoJoggersCount) {
    double tshirtPrice = 500;
    double hoodiePrice = 800;
    double cargoJoggersPrice = 1000;
    return (tshirtCount * tshirtPrice) + (hoodieCount * hoodiePrice) + (cargoJoggersCount * cargoJoggersPrice);
    }


class Ticket : public Person {
public:
    void printTicket(Person user, char foodChoice, int packageChoice, int showChoice ,double totalBill) {
        cout << "\n\n-----------------------------------------\n";
        cout << "-             ZOO VISIT TICKET          -\n";
        cout << "-----------------------------------------\n\n";
        cout << "-Name:                                  -" << user.name << "\n";
        cout << "Phone Number:                           -" << user.phoneNumber << "\n";
        //cout << "Address: " << user.getAddress() << "\n"; // Using getter method
        //cout << "ID Number: " << user.getIdNumber() << "\n"; // Using getter method
        cout << "Email:                                  -" << user.email << "\n\n";
        cout << "---------------------------------------\n\n";
        int s;
        cout << "Food Choice:                          -";
        if (foodChoice == '1'){
            cout << "Veg Food (Price: 600)                 -\n";
            foodprice=600*ticketm;
            cout << "Price:                                -"<<foodprice<<"\n\n";}
        else if (foodChoice == '2'){
            cout << "Non-Veg Food (Price: 800)             -\n";
            foodprice=800*ticketm;
            cout << "Price:                                -"<<foodprice<<"\n\n";}
        else
            cout << "None\n\n";

        cout << "Package Choice:                           -";
        switch (packageChoice) {
        case 1:
            cout << "Mammal Package\n";
            cout << "Price: "<< packprice <<"\n\n";
            break;
        case 2:
            cout << "Reptile Package\n";
            cout << "Price: "<< packprice <<"\n\n";
            break;
        case 3:
            cout << "Aquatic Package\n";
            cout << "Price: "<< packprice <<"\n\n";
            break;
        case 4:
            cout << "Mammal Package and Reptile Package\n";
            cout << "Price: "<< packprice <<"\n\n";
            break;
        case 5:
            cout << "Mammal Package and Aquatic Package\n";
            cout << "Price: "<< packprice <<"\n\n";
            break;
        case 6:
            cout << "Reptile Package and Aquatic Package\n";
            cout << "Price: "<< packprice <<"\n\n";
            break;
        case 7:
        cout << "7. ALL\n";
        cout << "Price: "<< packprice <<"\n\n";
            break;
        default:
            cout << "Invalid Package\n\n";
        }

        cout << "Show Choice: ";
        switch (showChoice) {
        case 1:
            cout << "Dolphin Show\n";
            cout << "Price: "<< showprice <<"\n\n";
            break;
        case 2:
            cout << "Safari Adventure\n";
            cout << "Price: "<< showprice <<"\n\n";
            break;
        case 3:
            cout << "Panda Show\n";
            cout << "Price: "<< showprice <<"\n\n";
            break;
        case 4:
            cout << "Dolphin Show and Safari Adventure \n";
            cout << "Price: "<< showprice <<"\n\n";
            break;
        case 5:
            cout << "Dolphin Show and Panda Show \n";
            cout << "Price: "<< showprice <<"\n\n";
            break;
        case 6:
            cout << "Safari Adventure and Panda Show\n";
            cout << "Price: "<< showprice <<"\n\n";
            break;
        case 7:
        cout << "7. ALL\n";
        cout << "Price: "<< showprice <<"\n\n";
            break;
        default:
            cout << "Invalid Show\n\n";
        }
        cout<<"Total price for merchandise: "<<totalBill<<"\n";
        int ss= showprice+packprice+foodprice+totalBill;
        cout <<"\n"<<"FINAL PRICE: "<< ss <<"\n\n";
        cout << "\n---------------------------------------\n";
        cout << "      Thank you for visiting the zoo!   \n";
        cout << "---------------------------------------\n\n";
    }
};

// ........................................................................................................................................


class Maintenance;
class EmployeesSalary;

class AnimalFood {
private:
    int wgroundnut;
    int wpulses;
    friend int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e);

public:
    AnimalFood(int groundnutCake,int pulses) {
        this->wgroundnut = groundnutCake;
        this->wpulses = pulses;
    }

    int calculateTotalCost();

};

class Maintenance {
private:
    int units;
    int waterLitres;
    int equipmentcost = 100000;
    friend int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e);

public:
    Maintenance(int elecunit, int waterLitres) {
        this->units = elecunit;
        this->waterLitres = waterLitres;
    }

    int elec_cost();

    int calcwatercost();

    int calctotcost();

};

class EmployeesSalary {
private:
    int zooCaretakerCount;
    friend int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e);

public:
    EmployeesSalary(int caretakerCount) {
        this->zooCaretakerCount = caretakerCount;
    }

    int caltotsal();

};

int AnimalFood::calculateTotalCost() {
    int totalCostfood = (wgroundnut * 70)  +
                       (wpulses * 130);
    return totalCostfood;
}

int Maintenance::elec_cost() {
    int electricityCost;
    if (units >= 0 && units < 10000) {
        electricityCost = units * 12;
    } else if (units >= 10000 && units < 20000) {
        electricityCost = units * 14;
    } else if (units >= 20000) {
        electricityCost = units * 20;
    }
    return electricityCost;
}

int Maintenance::calcwatercost() {
    int waterCost = this->waterLitres * 60;
    return waterCost;
}

int Maintenance::calctotcost() {
    int totalCost = elec_cost() + calcwatercost() + equipmentcost;
    return totalCost;
}

int EmployeesSalary::caltotsal() {
    int totalSalary = (zooCaretakerCount * 30000);
    return totalSalary;
}

int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e) 
{
    return f.calculateTotalCost() + m.calctotcost() + e.caltotsal();

}


int main() {

    int userChoice;
    cout << "Are you a:\n\n";
    cout << "1. Customer\n";
    cout << "2. Manager\n";
    cout << "\nEnter your choice: ";
    cin >> userChoice;

    if (userChoice == 1) { // Customer
    Person user;
    user.inputInfo();
    // user.displayInfo();
    char s;
    cout << "\nPress 1 for Veg food" << endl;
    cout << "Press 2 for Non-Veg food" << endl;
    cout << "Press 3 for None\n" << endl;
    cin >> s;

    Food f(s);
    f.choose();
    ZooPackage zoo;
    zoo.selectPackage();
    Zooshow zoo1;
    zoo1.chooseShow();

    int brandChoice;
    string size;
    bool chooseMore = true;
    int tshirtCount = 0, hoodieCount = 0, cargoJoggersCount = 0;
    cout<<"\nMerchandise counter\n";
    cout << "Select the Brand (1: Wild Republic, 2: National Geographic): \n";
    cin >> brandChoice;
    if (brandChoice == 1)
    cout << "Selected Brand: Wild Republic\n" << endl;
    else if (brandChoice == 2)
    cout << "Selected Brand: National Geographic\n" << endl;
    else {
    cout << "Invalid brand choice. Exiting...\n" << endl;
    return 1;
    }
    cout << "Select the Size (s, m, l, xl, xxl): \n";
    cin >> size;
    cout << endl << "Your selected merchandise details:\n" << endl;
    while (chooseMore) {
    int itemChoice;
    cout << "Choose what you want to buy (1: Tshirt, 2: Hoodie, 3: Cargo Joggers, 0: Done): \n";
    cin >> itemChoice;
    if (itemChoice == 0) {
    chooseMore = false;
    break;
    }
    if (itemChoice == 1)
    tshirtCount++;
    else if (itemChoice == 2)
    hoodieCount++;
    else if (itemChoice == 3)
    cargoJoggersCount++;
    else {
    cout << "Invalid item choice. Exiting...\n" << endl;
    return 1;
    }
    }
    double totalBill = calculateTotalBill(tshirtCount, hoodieCount, cargoJoggersCount);
    cout << "Total Bill: Rs." << totalBill << endl;
    // Offer conditions
    if (tshirtCount + hoodieCount + cargoJoggersCount == 2) {
    cout << "Congratulations! You have earned a free cap with your purchase.\n" << endl;
    }
    if (tshirtCount + hoodieCount + cargoJoggersCount >= 3) {
    cout << "Congratulations! You have earned a 3-month free Netflix subscription.\n" << endl;
    }


    Ticket ticket;
    ticket.printTicket(user, s, choice1, choice2,totalBill);


    return 0;

    } 
    
    // .............................................................................................................
    else if (userChoice == 2) { // Manager
        // Place manager's code here
    string pass;
    cout<<"Enter the password\n";
    cin>>pass;
    if(pass=="$$ABC$$123"){
    int gCake, gBran, gpulses;

    cout << "\nEnter the weight of groundnut cake (in kgs): \n";
    cin >> gCake;

    cout << "Enter the weight of pulses (in kgs): \n";
    cin >> gpulses;

    AnimalFood food(gCake, gpulses);

    int totalCostfood = food.calculateTotalCost();

    cout << "\nTotal expense for animal food: Rs. \n" << totalCostfood << endl;

    int units, waterLitres;

    cout << "\nEnter the number of electricity units consumed: \n";
    cin >> units;

    cout << "Enter the number of litres of water used (in lakhs): \n";
    cin >> waterLitres;

    Maintenance maintenance(units, waterLitres);
    int totalMaintenanceCost = maintenance.calctotcost();
    cout << "\nTotal maintenance cost: Rs. \n" << totalMaintenanceCost << endl;

    int caretakerCount;

    cout << "\nEnter the number of zoo caretakers: \n";
    cin >> caretakerCount;

    EmployeesSalary employees(caretakerCount);

    int totalSalary = employees.caltotsal();

    cout << "\nTotal salary for employees: Rs. \n" << totalSalary << endl;

    cout << "\nTotal Expenses is: \n" << caltotexp(food, maintenance, employees);
    }
    else{
        cout<<"Wrong Password\nTry again\n";
          // Place manager's code here
    string pass2;
    cout<<"Enter the password \n";
    cin>>pass2;
    if(pass2=="$$ABC$$123"){
    int gCake, gBran, gpulses;

    cout << "\nEnter the weight of groundnut cake (in kgs): \n";
    cin >> gCake;

    cout << "Enter the weight of pulses (in kgs): \n";
    cin >> gpulses;

    AnimalFood food(gCake, gpulses);

    int totalCostfood = food.calculateTotalCost();

    cout << "\nTotal expense for animal food: Rs. \n" << totalCostfood << endl;

    int units, waterLitres;

    cout << "\nEnter the number of electricity units consumed: \n";
    cin >> units;

    cout << "Enter the number of litres of water used (in lakhs): \n";
    cin >> waterLitres;

    Maintenance maintenance(units, waterLitres);
    int totalMaintenanceCost = maintenance.calctotcost();
    cout << "\nTotal maintenance cost: Rs. \n" << totalMaintenanceCost << endl;

    int caretakerCount, supervisorCount, managerCount;

    cout << "\nEnter the number of zoo caretakers: \n";
    cin >> caretakerCount;

    EmployeesSalary employees(caretakerCount);

    int totalSalary = employees.caltotsal();

    cout << "Total salary for employees: Rs. \n" << totalSalary << endl;

    cout << "\nTotal Expenses is: " << caltotexp(food, maintenance, employees);
    }
    else{
        cout<<"Wrong password twice now run the program again \n";
    }
    }
    return 0;

    } else {
        cout << "Invalid choice. Exiting program. \n";
    }

}
