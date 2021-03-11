#include <iostream>
using namespace std;

class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0.0){}
    Distance(int ft, float in):feet(ft),inches(in){}
    void getdist(){
        cout<<"\nEnter feet:";cin>>feet;
        cout<<"\nEnter inches:";cin>>inches;
    }
    void showdist() const{
        cout<<feet<<"\'-"<<inches<<'\"';
    }
    Distance operator + (Distance d2) const {
        int f= feet +d2.feet;
        float i = inches + d2.inches;
        if(i>=12.0){
            i -= 12.0;
            f++;
        }
        return Distance(f,i);
    }
};
int main()
{
    Distance dist1,dist3;
    dist1.getdist();
    Distance dist2;
    dist2.getdist();
    Distance dist4;
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;
    cout<<"Dist1=";dist1.showdist();cout<<endl;
    cout<<"Dist2=";dist2.showdist();cout<<endl;
    cout<<"Dist3=";dist3.showdist();cout<<endl;
    cout<<"Dist4=";dist4.showdist();cout<<endl;
    return 0;
}


// Homework
// Concat two strings