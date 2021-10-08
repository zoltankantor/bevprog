#include "std_lib_facilities.h"

int main(){


    double length=0;
    string unit="";
    double m=0;
    double cm_to_m=100;
    double inch;
    double feet_to_m=12*2.54/100;
    double inch_to_m=2.54/100;
    double newl=0;
    double osszeg=0;
    vector<double>vektor;


    cout<<"write a length and an unit like 'inch', 'cm', 'feet' or 'm'"<<endl;
    while(cin>>length>>unit){
        if(unit=="m"){
            cout<<"it's "<<length<<"m"<<endl;
            osszeg+=length;
            vektor.push_back(length);
            
        }
        else if(unit=="inch"){
            newl=length*inch_to_m;
            cout<<length<<" inch is "<<newl<<"m"<<endl;
            osszeg+=newl;
            vektor.push_back(newl);
            
        }
        else if(unit=="cm"){
            newl=length/cm_to_m;
            cout<<length<<" cm is "<<newl<<"m"<<endl;
            osszeg+=newl;
            vektor.push_back(newl);
            
        }
        else if(unit=="feet"){
            newl=length*feet_to_m;
            cout<<length<<" feet is "<<newl<<"m"<<endl;
            osszeg+=newl;
            vektor.push_back(newl);
        }
        else if(unit=="|"){
            break;
        }
            
        
        else
            cout<<"thats neither of them try again"<<endl;
    }
        cout<<"ezek összege: "<<osszeg<<"m"<<endl;

        sort(vektor);
        for(int i=0;i<vektor.size();i++)
            cout<<vektor[i]<<"m"<<endl;

return 0;
}