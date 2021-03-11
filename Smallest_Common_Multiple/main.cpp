#include <iostream>
#include <string>

using namespace std;

class Hero {
private:
    int pw = 10;
    int mp = 10;
public:
    void showPower(){
        cout<<"Power: "<<pw<<endl;
    }
    void showMagic(){
        cout<<"Magic Power: "<<mp<<endl;
    }
};

class Berseker {
    Hero h1;
    string special = "Blood thrist";
public:
    void showData(){
        h1.showPower();
        cout<<"Your special skill is "<<special<<endl;
    }
};

class Mage {
    Hero h1;
    string special = "Wand magic";
public:
    void showData(){
        h1.showMagic();
        cout<<"Your special skill is "<<special<<endl;
    }
};

int main()
{
    Berseker b1;
    Mage m1;
    b1.showData();
    m1.showData();
    return 0;
}
