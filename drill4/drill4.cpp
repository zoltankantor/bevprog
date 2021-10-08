#include "std_lib_facilities.h"

int main(){


    double a=0;
    double b=0;
    double value=0;
    double max=INT_MIN;
    double min=INT_MAX;
    char v=0;
    int length=0;
    int cm=0;
    int m=0;
    int in=2.54;
    int ft=12;

    char unit=0;

   /* while(cin>>a && cin>>b){
        if(a<b){
            cout<<"the smaller value is: "<<a<<endl;
            cout<<"the larger value is: "<<b<<endl;
                if((b-a)<1)
                    cout<<"the numbers are almost equal, difference is: "<<b-a<<endl;
    }
        else if(a>b){
            cout<<"the smaller value is: "<<b<<endl;
            cout<<"the larger value is: "<<a<<endl;
                if((a-b)<1)
                    cout<<"the numbers are almost equal, difference is: "<<a-b<<endl;
        }
        else if(a=b){
            cout<<a<<"(a) and "<<b<<"(b) are equals"<<endl;
        }

        if(v=='|'){
            cout<<"if u type '|' the program ends"<<endl;
            break;
        } */

        while(cin>>a){
            cout<<"a= "<<a<<endl;
            if(a<min){
                min=a;
                cout<<"smallest so far\n";
        }
            if(a>max){
                cout<<"the largest so far\n";
                max=a;
            }
            if(v=='|'){
                break;
            }
            
            
        }
        
        

return 0;
}