#include "../std_lib_facilities.h"
int main()
{

    string first_name="";
    cout<<"Enter the name of the person you want to write to"<<endl;
    cin>>first_name;
    cout<<"\tDear "<<first_name<<",";
    cout<<" how are you? im fine. i miss you"<<endl;

    string friend_name="";
    cout<<"enter your other friend's name"<<endl;
    cin>>friend_name;
    cout<<"Have you seen "<<friend_name<<" lately?"<<endl;

    char friend_sex=0;
    cout<<"what's your other friend's gender? write 'f' or 'm'!"<<endl;

    //while(friend_sex!='f' && friend_sex!='m'){
  //      cin>>friend_sex;
    //    
    //}
      //  if(friend_sex=='f'){
        //    cout<<"if u see "<<friend_name<<" please ask her to call me";
        //}
        //else if(friend_sex='m'){
          //  cout<<"if u see "<<friend_name<<" please asj him to call me";
        //}
    
    while(cin>>friend_sex){
        if(friend_sex=='f'){
            cout<<"if u see "<<friend_name<<" please ask her to call me"<<endl;
            break;
        }
        if(friend_sex=='m'){
            cout<<"if u see "<<friend_name<<" please ask him to call me"<<endl;
            break;
        }
        else
            cout<<"thats neither of them, try again"<<endl;

        
    }
        
        

    int age=0;
    cout<<"please enter "<<first_name<<"'s age!"<<endl;
    cin>>age;
    
    if(age<0 || age>110)
         simple_error("you're kidding!");

    cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;
    if(age<12)
        cout<<"next year u will be "<<age+1<<endl;
    if(age==17)
        cout<<"Next year you will be able to vote."<<endl;
    if(age>70)
        cout<<"i hope you íre enjoying retirement"<<endl;

    cout<<"yours sincerely, \n\n"<<endl;
    cout<<"Zoltán"<<endl;

    return 0;

}
