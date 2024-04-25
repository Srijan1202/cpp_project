#include <iostream>
using namespace std;

class Maintenance;
class EmployeesSalary;

class AnimalFood {
private:
    int wgroundnut;
    int wpulses;

public:
    AnimalFood(int groundnutCake,int pulses) {
        this->wgroundnut = groundnutCake;
        this->wpulses = pulses;
    }

    int calculateTotalCost();

    friend int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e);
};

class Maintenance {
private:
    int units;
    int waterLitres;
    int equipmentcost = 100000;

public:
    Maintenance(int elecunit, int waterLitres) {
        this->units = elecunit;
        this->waterLitres = waterLitres;
    }

    int elec_cost();

    int calcwatercost();

    int calctotcost();

    friend int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e);
};

class EmployeesSalary {
private:
    int zooCaretakerCount;

public:
    EmployeesSalary(int caretakerCount) {
        this->zooCaretakerCount = caretakerCount;
    }

    int caltotsal();

    friend int caltotexp(AnimalFood f, Maintenance m, EmployeesSalary e);
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
    int gCake, gBran, gpulses;

    cout << "Enter the weight of groundnut cake (in kgs): ";
    cin >> gCake;

    cout << "Enter the weight of pulses (in kgs): ";
    cin >> gpulses;

    AnimalFood food(gCake, gpulses);

    int totalCostfood = food.calculateTotalCost();

    cout << "Total expense for animal food: Rs. " << totalCostfood << endl;

    int units, waterLitres;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    cout << "Enter the number of litres of water used (in lakhs): ";
    cin >> waterLitres;

    Maintenance maintenance(units, waterLitres);
    int totalMaintenanceCost = maintenance.calctotcost();
    cout << "Total maintenance cost: Rs. " << totalMaintenanceCost << endl;

    int caretakerCount, supervisorCount, managerCount;

    cout << "Enter the number of zoo caretakers: ";
    cin >> caretakerCount;

    EmployeesSalary employees(caretakerCount);

    int totalSalary = employees.caltotsal();

    cout << "Total salary for employees: Rs. " << totalSalary << endl;

    cout << "Total Expenses is: " << caltotexp(food, maintenance, employees);

    return 0;
}