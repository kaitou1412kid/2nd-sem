#include <iostream>
#include <string>
using namespace std;

class magic {
public:
    int magic_level = 10;
    void magic_1(){
        cout<<"Your magic level is "<<magic_level<<endl;
    }
};

class physical {
public:
    int strength = 10;
    physical(){
        cout<<"Your strength is "<<strength<<endl;
    }
};

class berseker: virtual public magic, virtual public physical {
public:
    
    berseker(){
        cout<<"Your ability is blood thrust."<<endl;
    }
} ;

class mage:virtual public magic,virtual public physical {
public:
    mage(){
        cout<<"Your ability is wand magic. Here take your Wand"<<endl;
    }
    
    //int wand_magic = 10;
};

class ninja:virtual public magic,virtual public physical {
public:
    ninja(){
        cout<<"Your ability is ninja walk. yahoooooo"<<endl;
    }
    
    //int agility = 10;
};

class villian:virtual public berseker,virtual public mage,virtual public ninja{
public:
    void villian_1(){
        cout<<"You are the villian. Nigerundayoooooo"<<endl;
    }
    //int villianous_aura = 10;
};

int main()
{
    villian madara;
    madara.villian_1();
    return 0;
}
