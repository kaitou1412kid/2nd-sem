// Constructor
// Special member method that is invoked during object creation.
// Useful for initilization.
// Same name as the class
// No return type is specified.
// can be overloaded.

/*class Player{
private:
    string name;
    int health;
    int xp;
public:
    // overloaded constructor
    Player();
    Player(string name);
    Player(string name,int health, int xp);
};*/

// Destructor
// Special member method used when an object goes out of scope.
// Same name as class proceded with a tilde(~)
// Invoked automatically when an object is destroyed.
// No return type and no paramters.
// Only one destructor is allowed per class(cannot be overloaded)
// Useful to release memory and other resources.


#include <iostream>
#include <string>

using namespace std;
class Player{
private:
    string name;
    int health;
    int xp;
public:
    // overloaded constructor
    Player();
    Player(string name);
    Player(string name,int health, int xp);
    // Destructor
    ~Player();
};

//#include <iostream>
//#include <string>
//using namespace std;

/*class Player {
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val){
        name = name_val;
    }
    // overloaded constructor
    Player(){
        cout<<"No argument constructor called"<<endl;
    }
    Player(string name){
        cout<<"Single argument constructor called"<<endl;
    }
    Player(string name, int health, int xp){
        cout<<"Three argument constructor called"<<endl;
    }
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};
int main(){
    {
        Player joseph;
        joseph.set_name("Joseph");
    }
    Player ceasar;
    ceasar.set_name("Ceasar");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villan("Villan",100,12);
    villan.set_name("Villan");
    
    Player *enemy = new Player;
    enemy -> set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss",1000,3000);
    level_boss -> set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}*/

// Default constructor(no args constructor)
// - Does not accept any argument.
// - If you write no constructors at all for a class, C++ will generate a Default constructor that does nothing.
// - Called when you instantiate a new object with no arguments.

/*class Account{
private:
    string name;
    double balance;
public:
    Account(){
        name = "Name";
        balance = 10.0;
    }
    double get_balance(){
        return balance;
    }
    bool withdraw(double amount);
    bool deposit(double amount);
};

int main(){
    Account shank_acc;
    cout<<shank_acc.get_balance()<<endl;
}*/

// non-default constructor
/*
class Account{
private:
    string name;
    double balance;
public:
    Account(string name_val, double bal){
        name = name_val;
        balance = bal;
    }
    double get_balance(){
        return balance;
    }
    bool withdraw(double amount);
    bool deposit(double amount);
};

int main(){
    Account shank_acc("Shank",100.0);
    cout<<shank_acc.get_balance()<<endl;
}
*/
/*
// Copy constructor
// When objects are copied C++ must create a new object from an existing object.
// When a copy of an object made?
// - Passing objects by value as parameters.
// - Returning an object based on another of the same value.
// C++ must have a way of accomplishing this so it provides a compiler defined copy constructor if you dont.

// 1st use case: when we pass an object to a function or method by value.(default)
// object creation and initializaation
Player Hero{"Hero",100,200};

// Function decleration
void display_player(player p){
    // P is a copy of hero in this example
    // Destructor of p will be called
}

// Function call (using the object)
display_player(hero);

// 2nd use case:
// object creation
Player enemy;

// Function declaration
Player create_super_enemy(){
    Player an_enemy{"Super Enemy",1000,1000};
    return an_enemy;// A copy of an_enemy is returned
}

// function call
enemy = create_super_enemy();

// 3rd use case:
// Object creation and initialization
Player hero{"hero",100,100};
// A copy of hero is made
Player another_hero{hero};
*/
// Beware if you have a pointer data member
// - pointer will be copied 
// - Not what it is pointing to
// - Shallow copy
// - Deep copy

//class player{
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    string get_name(){return name;}
//    int get_health(){return health;}
//    int get_xp(){return xp;}
//    // Default parameterized constructor
//    player(string name_val = "None", int health_val = 0, int xp_val = 0);
//    // Copy constructor
//    player(const player &source);
//    // Destructor
//    ~player(){cout<<"Destructor called for: "<<name<<endl;}
//};
//player::player(string name_val, int health_val, int xp_val)
//    :name{name_val}, health{health_val}, xp{xp_val}{
//        cout<<"Three args constructor called "<<endl;
//    }
//player::player(const player &source)
//    :name{source.name}, health{source.health}, xp{source.xp}{
//        cout<<"Copy constructor - made copy of "<<source.name<<endl;
//    }
//void display_player(player p){
//    cout<<"Name: "<<p.get_name()<<endl;
//    cout<<"Health: "<<p.get_health()<<endl;
//    cout<<"xp: "<<p.get_xp()<<endl;
//}
//
//int main(){
//    player empty;
//    display_player(empty);
//    player frank("Frank");
//    player hero("hero",100);
//    player villian("Villian",100,55);
//    
//    return 0;
//}

// Assignment
// Structure and classes
// static classes 
// friend of a class
