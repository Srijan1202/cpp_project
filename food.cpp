#include<iostream>
using namespace std;

class Food {
private:
    char a;
public:
    Food(char a) 
    {
        this->a=a;
    }
    void choose();
};

void Food::choose() {
    if(a == '1') 
    {
        cout << "You have chosen Veg Food" << endl<<"The price for your food is 600";
    } 
    else if(a == '2') 
    {
        cout << "You have chosen Non-Veg Food" << endl<<"The price for your food is 800";
    } 
    else if(a == '3') 
    {
        cout << "You haven't chosen any food";
    }
}

int main() 
{
    char s;
    cout << "Press 1 for Veg food" << endl;
    cout << "Press 2 for Non-Veg food" << endl;
    cout << "Press 3 for None" << endl;
    cin >> s;

    Food f(s);
    f.choose();

    return 0;
}


