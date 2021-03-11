// Four pillars of Object oriented programming
// Abstraction
// Polymorphism
// Inheritance
// Encapsulation

// Objects and Classes
// Classes:
// - Blueprint from which objects are created.
// - a user-defined data-type.
// - Has attributes (data).
// - Has methods (functions).
// - Can hide data and methods.
// - Provides a public interface.

// Example of classes:
// Account
// Employee
// std::vector

// Objects:
// - Created from a class.
// - Represents a specific instance of a class.
// - Can create many many objects.
// - Each has its own identity.
// - Each uses the defined class methods.

// Examples of objects:
// Hari's Account.
// Ram's Account.
// Each has their own balance, deposit history and withdrawl history.

// Declaring a class
// class Class_Name{
    // declerations
// };

/*class Player{
    // attributes
    std::string name;
    int health;
    int xp;
    
    // methods
    void talk(std::string text_to_say);
    bool is_dead();
}*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*class Player{
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};
    
    // methods
    void talk(std::string text_to_say);
    bool is_dead();
};
class Account{
    // attributes
    string name;
    double balance;
    // methods
    bool deposit(double);
    bool withdraw(double);
};
int main(){
    Account ram_acc;
    Account hari_acc;
    
    Player ram;
    Player hari;
    
    Player player[]{ram,hari};
    
    vector<Player>player_vec{ram};
    player_vec.push_back(hari);
    
    Player *enemy{nullptr};
    enemy = new Player;
    
    delete enemy;
    return 0;
}*/

// we can access - class attributes and class methods
// Some of the class members are not accessible.
// we need an object to access instance variables.

// If we have pointer to an object (member of pointer operator)
// dereference the pointer then use the dot operator.
//         Account *frank_account = new Account();
//         (*frank_account).balance;
// Or use the member pointer operator (arrow operator)
//         frank_account -> balance;

/*class Player{
public:
    //attributes
    string name;
    int health;
    int xp;
    //methods
    void talk(string text_to_say){cout<<name<<"says"<<text_to_say<<endl;}
    bool is_dead();
};
class Account{
public:
    //attributes
    string name;
    double balance;
    //methods
    bool deposit(double bal){balance +=bal;cout<<"deposited"<<endl;}
    bool withdraw(double bal){balance -=bal;cout<<"withdrawn"<<endl;}
    
};
int main(){
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp=12;
    frank.talk("Hi there!!!1");
    
    Player bob;
    bob.name = "Bob";
    bob.health = 200;
    bob.xp= 15;
    bob.talk("Helloooooooooooo");
    
    Account frank_acc;
    frank_acc.name = "Frank";
    frank_acc.balance = 5000.0;
    
    frank_acc.deposit(1000.0);
    frank_acc.withdraw(500.0);
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15;
    enemy -> talk("I will destroy you");
}*/

// Class member access modifiers
// - public : Accessible everywhere
// - private :- Accesible only by the members or friends of the class.
// - protected :- used wth inheritance (lets discuss during the inheritance chapter)

// public
// class Class_Name{
// public:
//          declerations;
// };

// private
// class Class_Name{
// public:
//          declerations;
// };

// Saame with protected

/*class Player{
private:
    //attributes
    string name;
    int health;
    int xp;
public:
    //methods
    void talk(string text_to_say){cout<<name<<"says"<<text_to_say<<endl;}
    bool is_dead();
};
int main(){
    Player frank;
    frank.name = "Frank";
    cout<<frnak.health<<endl;
    frank.talk("hey baby *click* ");
}*/

// Implementing member methods
// Very similar to how we implemented function.
// member methods have access to member attributes
//  - so you dont need to pass the arguments.
// Can be implemented ainside the class decleration(implicity inline)
// Can be implemented outside the class decleration.
//  - Need to use Class_name::method_namae
// Can seperate specification and implementation.
//  - .h file for the class decleration
//  - .cpp file for the class implementation.

/*class Account{
private:
    double balance;
public:
    void set_balance(double bal){
        balance = bal;
    }
    double get_balance(){
        return balance;
    }
};

class Account{
private:
    double balance;
public;
    void set_balance(double bal);
    double get_balance();
};
void Account::set_balance(double bal){
    balance = bal;
}
double Account::get_balance(){
    return balance;
}*/

class Account{
private:
    string name;
    double balance;
public:
    void set_balance(double bal){balance = bal;}// inline
    double get_balance(){return balance;}// inline
    
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};
void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    balance += amount;
    return true;
}
bool Account::withdraw(double amount){
    if(balance-amount >= 0){
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
}

int main(){
    Account ole_acc;
    ole_acc.set_name("Ole");
    ole_acc.set_balance(10000.0);
    
    if (ole_acc.deposit(200.0))
        cout<<"Deposited"<<endl;
    else
        cout<<"Not Deposited"<<endl;
        
    if (ole_acc.withdraw(5000.0))
        cout<<"Withdrawn"<<endl;
    else
        cout<<"Not sufficient balance"<<endl;
    if (ole_acc.withdraw(7000.0))
        cout<<"Withdrawn"<<endl;
    else
        cout<<"Not sufficient fund"<<endl;
    return 0;
}

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