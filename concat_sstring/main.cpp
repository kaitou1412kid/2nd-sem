//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class concat{
//private:
//    string name;
//    string surname;
//public:
//    concat():name("name"),surname("surname"){}
//    concat(string n, string sur):name(n),surname(sur){}
//    void getdata() {
//        cout<<"Enter your first name: ";
//        cin>>name;
//        cout<<"Enter your surname: ";
//        cin>>surname;
//    }
//    void showdata() const{
//        cout<<name<<" "<<surname;
//    }
//    concat operator + (concat c2) const{
//        string name_1 = name +" " + c2.surname;
//        string surname_1 = c2.name +" " + surname;
//        return concat(name_1,surname_1);
//    }
//    
//};
//int main()
//{
//    concat string_1,string_3;
//    string_1.getdata();
//    concat string_2;
//    string_2.getdata();
//    string_3 = string_1 + string_2;
//    cout<<"Your name is :";string_1.showdata();cout<<endl;
//    cout<<"Your name is :";string_2.showdata();cout<<endl;
//    cout<<"Your name after interchanging surname is :";string_3.showdata();cout<<endl;
//    return 0;
//}

#include <iostream>
#include <string>

using namespace std;

class concat{
private:
    string name;
public:
    concat():name("name"){}
    concat(string n):name(n){}
    void getdata() {
        cout<<"Enter your name: ";
        cin>>name;
    }
    void showdata() const{
        cout<<name<<" ";
    }
    concat operator + (concat c2) const{
        string name_1 = name +" " + c2.name;
        return concat(name_1);
    }
    
};
int main()
{
    concat string_1,string_3;
    string_1.getdata();
    concat string_2;
    string_2.getdata();
    string_3 = string_1 + string_2;
    cout<<"Your name is :";string_1.showdata();cout<<endl;
    cout<<"Your name is :";string_2.showdata();cout<<endl;
    cout<<"Your name combined is :";string_3.showdata();cout<<endl;
    return 0;
}
