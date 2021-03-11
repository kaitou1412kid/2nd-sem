// Inheritance
// What is it and why is it used?
// - Provides a method for creating new classes from existing classes.
// - The new classs contains the data and behaviours of the existing class.
// - Allow for reuse of existing classes.
// - Allows us for focus on the common attributes among a set of classes.
// - allows new classes to modify behaviour of existing classes to make it unique.
//   (without actually modifying the original class) 

// Related classes:
// Account, Saving Account, Checking Account, Trust Account, etc.
// Person, Employee, Student, Faculty, Administrator, ettc.

// Account
// - Account (balance, deposit, withdraw)
// - saving account (balance, deposit, withdraaw, interest rate,...)
// - Checking account (balance, deposit, withdraw, minimum balance, per check fee,..)
// - Trust account (balance, deposit, withdraw, interest ratae,...)

// If we implement all these classes independently,
/*class Account{
    // balance, deposit, withdraw
    
};
class saving_account{
    // balance, deposit, withdraw, interest rate
};
class checking_account{
  // balance, deposit, withdraw, minimum balance , per check fee
};
class trust_account{
  // balance, deposit, withdraw, interest rate
};

// Account class - with inheritance - code reuse
class Account{
    // balance , deposit, withdraw
};
class ssaving_account:public Account{
    // interest rate, specialized withdraw,...
};
class checking_account:public Account{
    // minimum balance, per check fee, specialized withdraw
};
class trust_account:public Account{
    // interest rate, specialized withdraw
};*/

// Terminologies
// Inheritance : Process of creating a new classes from existing classes(reuse mechanism)
// Single_inheritance: a new class is created from another 'single' class.
// Multiple-inheritance : A new class is created from two(or more) other classes.
// Base class ( parent class, super class) : The class being extended or inherited from.
// Derived class(child class, sub class) : The class being created from the base class.
//                               will inherit attributes and operations from the base class
// "Is-A" relatiionship (saving ac is a account)
// - Public inheritance
// - Derived classes are sub-types of their base classes.
// - Can use a derived class object whenever we use a base class object.

// Generalization : combining similar classes into a single, more general class based on common attributes.
// Specialization : Creating new classes from existing classes proving more specialized attributes or operations.
// Inheritance or class hierarchies : Organization of our inheritance relationships.

// Deriving classes from existing classes.
//class Base{
    // base class members
//};
//class Derived: Access_specifier Base{
    // Derived class member
//};
// access_specifier can be : Public , private (default), protected
// - Public:- most common, establishes "is-A" relationship between derived and base claases.
// - private/protected :- Establishes 'Has-A' relationship but it is not same as composition.

#include<iostream>
using namespace std;


class Account{
public:
    double balance;
    string name;
    void deposit (double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};
Account::Account()
    :balance{0.0},name{"An Account"}{
}
Account::~Account(){}
void Account::deposit(double amount){
    balance += amount;
    cout<<"Account deposit called with "<<amount<<endl;
}
void Account::withdraw(double amount){
    balance -= amount;
    cout<<"Account withdraw called with "<<amount<<endl;
}


class Saving_account:public Account{
public:
    double int_rate;
    Saving_account();
    ~Saving_account();
// void deposit(double amount);
// void withdraw(double amount);
};
Saving_account::Saving_account()
    :int_rate{0.3}{}
Saving_account::~Saving_account(){}
//void Saving_account::deposit(double amount){
// cout<<"Saving account deposit called with "<<amount<<endl;
//}
//void Saving_account::withdraw(double amount){
// cout<<"Saving account withdraw called with "<<amount<<endl;
//}

int main(){
    //Account acc;
    //acc.deposit(2000.0);
    //acc.withdraw(500.0);
    Saving_account sav;
    cout<<"Your initial balance is "<<sav.balance<<endl;
    sav.deposit(2000.0);
    sav.withdraw(500.0);
    cout<<"Your final balance is "<<sav.balance<<endl;
    return 0;
}

// Class member access modifier in inheritance
// Protected members
/*class Base{
protected:
 * 
    // Protected base class modifier
};
// - Accesible from the base class itself.
// - Accessible from classes derived ffrom the base.
// - Not accessible by objects of derived or basse class.

class Base{
public:
    int a; // Public base class members
protected:
    int b; // Protected base class members
private:
    int c; // PRivate base class members
};*/

// Access with public inheritance,
// Base class                       Access in derived class
// Public:a                         Public:a
// Protected:b                      Protected:b
// Proivate:c                       C: no access

// Access with protected inheritance,
// Base class                       Access in derived class
// Public:a                         Protected:a
// Protected:b                      Protected:b
// Proivate:c                       C: no access

// Access with private inheritance,
// Base class                       Access in derived class
// Public:a                         private:a
// Protected:b                      private:b
// Proivate:c                       C: no access

/*class Base{
public:
    int a{0};
    void display(){cout<<a<<","<<b<<","<<c<<endl;}
protected:
    int b{0};
private:
    int c{0};
};

class Derived:public Base{
public:
    void acess_base_member(){
        a=100;
        b= 200;
        c= 300;
    }
};

int main(){
    cout<<"Base member access from basse objects"<<endl;
    Base base;
    base.a=100;
    //base.b=200;
    //base.c=300;
    
    cout<<"Base member access from derived objects"<<endl;
    Derived d;
    d.a=100;
    d.b=200;
    d.c=300;
}*/

// UML :- Unified modeling languageclTabCtrl