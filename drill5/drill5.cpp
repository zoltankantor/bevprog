#include "std_lib_facilities.h"

int main(){
try{
    

    //1
    cout << "Success1!\n";

    //2
    cout << "Success2!\n";

    //3
    cout << "Success3" << "!\n";

    //4
    cout << "Success4!" << '\n';

    //5
    int res = 7; 
    vector<int> v(10); 
    v[5] = res; 
    cout << "Success5!\n";

    //6
    vector<int> v2(10); 
    v2[5] = 7; 
    if (v[5]!=7) 
        cout << "Success6!\n";

    //7
    bool cond=1;
    if (cond)
        cout << "Success7!\n";
    else
        cout << "Fail!\n";

    //8
    bool c = true;
    if (c) 
        cout << "Success8!\n"; 
    else 
        cout << "Fail!\n";

    //9
    string s = "ape";
    bool c2 = "fool"<s; 
    if (!c2) 
        cout << "Success9!\n";

    //10
    string s2 = "ape"; 
    if (s2=="fool") 
        cout << "Success10!\n";

    //11
    string s3 = "fool"; 
    if (s3=="fool") 
        cout << "Success11!\n";

    //12
    string s4 = "ape"; 
    if (s4!="fool") 
        cout << "Success12!\n";

    //13
    vector<char> v3(5); 
    for (int i=4; i<v3.size(); ++i) 
        cout << "Success13!\n";

    //14
    vector<char> v4(5); 
    for (int i=4; i<=v4.size(); ++i) 
        cout << "Success14!\n";

    //15
    string s5 = "Success15!\n"; 
    for (int i=0; i<12; ++i) 
        cout << s5[i];

    //16
    if (true) 
        cout << "Success16!\n"; 
    else 
        cout << "Fail!\n";

    //17
    int x = 2000; 
    int c3 = x; 
    if (c3==2000) 
        cout << "Success17!\n";

    //18
    string s6 = "Success18!\n"; 
    for (int i=0; i<12; ++i) 
        cout << s6[i];

    //19
    vector<int> v5(5); 
    for (int i=5; i<=v5.size(); ++i) 
        cout << "Success19!\n";

    //20
    int i=0; 
    int j = 9; 
    while (i<10) 
        ++i; 
    if (j<i) 
        cout << "Success20!\n";

    //21
    int x2 = 3; 
    double d = 5/(x2-2); 
    if (d!=2*x2+0.5) 
        cout << "Success21!\n";

    //22
    string s7 = "Success22!\n"; 
    for (int i=0; i<=10; ++i) 
        cout << s7[i];

    //23
    int i2=0; 
    int j2=0;
    while (j2<10) 
        ++j2; 
    if (j2>i2) 
        cout << "Success23!\n";

    //24
    int x3 = 4; 
    double d2 = 5/(x3-2); 
    if (d2=2*x+5.5) 
        cout << "Success24!\n";

    //25
    cout<< "Success25!\n";



return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
}
