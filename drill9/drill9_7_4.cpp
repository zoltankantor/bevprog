#include "std_lib_facilities.h"
class Year{
     static constexpr int min = 1800;
     static constexpr int max = 2200;
     public:
          class Invalid{};
          Year(int x): y{x} {if( x < min || x > max) throw Invalid{}; }
          int year() {return y;}
          void increment() { y++;}
     private:
          int y;
};
Year operator++(Year& year){
      year.increment();
      return year;

}
ostream& operator<<(ostream& os, Year year)
{
     return os << year.year();
}

const vector<string> months = 
{
     "January",
     "February",
     "March",
     "April",
     "May",
     "June",
     "July",
     "August",
     "September",
     "October",
     "November",
     "December"
};

enum class Month {
     jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
};
//++ operator feluldefinialasa, 

Month operator++(Month& m)
{
          // Ha m ==Month.Dec-el akk m = Januárral  : különben az m-et növeljük eggyel
     m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
     return m;
}
// meg kell csinálni a kiirást mert a < jelt nem értelmezi jelen esetben

ostream& operator<<(ostream& os, Month m)
{
     return os << months[int(m)]; 
}





class Date {
private:
     Year year;
     Month month;
      int day;
public:
     class Invalid{};
     Date():year(Year{2001}), month(Month::jan), day(1) {} // Alapértelmezett konstruktor ez lesz az alap beállítása
     Date(Year y, Month m,int d): year(y),month(m),day(d) { if(!is_valid()) throw Invalid{};}  // Konstruktor a : után érték adás van hogyan adjunk értéket ha nem valid az érték aki ki fog dobni egy invalid kivételt
     void add_day(int n);
          bool is_valid(); 
     Year get_year() const { return year;} // A constal jelezzük azt ,hogy nem fogják modositani az objektumunk állapotát!
     Month get_month() const  { return month;}
     int get_day() const { return day;}


     void set_year(Year y){
         year = y;
     }
     void set_month(Month m){
                    month = m;
                   
     }
     void set_day(int d){
          if( d > 0  && d <=31){
                    day = d;
          } 
          else{
               error("Invalid year in set_day().");
          }
     }


};



bool Date::is_valid(){
     if(day <1 || day > 31 ) return false;
     else{
          return true;
     }
}

void Date::add_day( int n) {
     day +=n;
     if(day > 31){
          ++month;
          day -=31;
          if(month == Month::jan){
               ++year;
          }
     }
}

int main()

     try{



          Date today(Year{1978},Month::june,25);        
     cout << "Today:  " << today.get_year() << "." << today.get_month() << "." << today.get_day() << ".\n";     
     Date tomorrow = today;
     tomorrow.add_day(1);

     cout << "Tomorrow: " << tomorrow.get_year() << "." << tomorrow.get_month() << "." << tomorrow.get_day() << ".\n";     
//Date invalid {Year{2004},Month::asd,-5};
    //cout<<invalid<<"\n"; 
          int a = 7;
          int b = a;
          Date mybirth_day(Year{2002},Month::mar,3); 
     cout << "My BirthDay: " << mybirth_day.get_year() << "." << mybirth_day.get_month() << "." << mybirth_day.get_day() << ".\n";     
          // Date objektznij vektorba rendezése
            vector<Date> dates(1); //  nem adunk meg értéket csak nagyságot ,magába nem fog menni mert nincs alapértelmezett konstruktorunk !  Adni kell neki valami alap értéket ahhoz hogy müködjön
          for( const auto& date : dates){ // alap értelmezett értékek ki irása [ Mivel jeleztük fent a const getnél hogy nem fogják változtani az értékét igy elé irhatjuk a const-ot]
     cout << "Default Date: " << date.get_year() << "." << date.get_month() << "." << date.get_day() << ".\n";     
          }

          return 0;
}
catch( Year::Invalid){
     cerr<< "Exception : Invalid Year" << '\n';
     return 1;
}
catch( Date::Invalid){
     cerr<< "Exception : Invalid date" << '\n';
     return 2;
}
catch(exception& e){
     cerr << e.what() << '\n';
     return 3;
}