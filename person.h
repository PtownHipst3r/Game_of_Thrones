// Lawrence Scroggs 05/12/2019 CS202 Program #3

// This will hold the person class.  Person will be the 
// base class of this heirarchy.  It will hold virtual functions that 
// will be used throughout the implementation of the characters. The subclass
// will be last name.  This will hold another data boost that is associated
// with the last name.  The final subclass will be the first name subclass.
// This will implement additional data attributes associated with the name.


#include "speech.h"


class person{

  public:

    person(char * a_last);
    person();
    ~person();

    
    int see_hp();

  protected:

    int victories;
    int hit_points;
    int atk_points;
    int count_dwn;

    bool speech_on;


};
class last_name: public person{

  public:

    last_name(char * a_last);
    last_name();
    ~last_name();

    int set_special(); 
  
  protected:

    bool activate; // sets special to only be used once
    int special; // boost to hp or atk
    char * last;

};
class first_name: public last_name{

  public:

    first_name(char * a_first, char * a_last);
    first_name();
    ~first_name();

    first_name& operator -= (const first_name&);  
    first_name & operator += (const first_name&);
    first_name operator + (const first_name &);
    first_name operator - (const first_name &);

    void stats();

    int reset();
    int use_pwr();
    int set_win();
    int use_script();

    char * view_name();


  protected:
   
    bool power;  //sets power for additional boost
    char * first;

    speech * script;

};

















