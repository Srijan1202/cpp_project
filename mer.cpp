//MERCHANDISE CODE BY PRAAGYA GARG
#include <iostream>
#include <string>
using namespace std;
// CODE FOR MERCHANDISE
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
int main() {
int brandChoice;
string size;
bool chooseMore = true;
int tshirtCount = 0, hoodieCount = 0, cargoJoggersCount = 0;
cout << "Select the Brand (1: Wild Republic, 2: National Geographic): ";
cin >> brandChoice;
if (brandChoice == 1)
cout << "Selected Brand: Wild Republic" << endl;
else if (brandChoice == 2)
cout << "Selected Brand: National Geographic" << endl;
else {
cout << "Invalid brand choice. Exiting..." << endl;
return 1;
}
cout << "Select the Size (s, m, l, xl, xxl): ";
cin >> size;
cout << endl << "Your selected merchandise details:" << endl;
while (chooseMore) {
int itemChoice;
cout << "Choose what you want to buy (1: Tshirt, 2: Hoodie, 3: Cargo Joggers, 0: Done): ";
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
cout << "Invalid item choice. Exiting..." << endl;
return 1;
}
}
double totalBill = calculateTotalBill(tshirtCount, hoodieCount, cargoJoggersCount);
cout << "Total Bill: Rs." << totalBill << endl;
// Offer conditions
if (tshirtCount + hoodieCount + cargoJoggersCount == 2) {
cout << "Congratulations! You have earned a free cap with your purchase." << endl;
}
if (tshirtCount + hoodieCount + cargoJoggersCount >= 3) {
cout << "Congratulations! You have earned a 3-month free Netflix subscription." << endl;
}
return 0;
}