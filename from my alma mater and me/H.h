#pragma once // 

class H {
  //int I;          //Members only declared. Members by default privat
  public:
    int I;
    H(int L);        //Declaration of the constructor.
    ~H();          //Declaration of the destructor.
    void print();      //Members only declared.
    void Something() const; //this function doesn't change any of the members of its class 
    static int R;      //'R' is independent to the individual instaces of this class 'H'. It resides to the class itself, and all instances use this one variable 'R'.
    static void S();    //this function is //'S' is independent to the individual instaces of this class 'H'.
                //It resides to the class itself, and all instances use this one function 'S'.
                //These functions are only permitted to use static variables
                //These functions are called like so: 'H::S()'
    H operator+(H& h);
    //------------------------------------------------------------
    // orperator overloading in classes
    //------------------------------------------------------------
    // Syntax: 'DATATYPE operatorORPERATORSIGN(DATATYPE& other)'
};