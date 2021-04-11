#include <iostream>
#include <cmath>

class a
{
	int member1;
	protected:
		int member2;
		int member3;
	private:
		int member4;
		a(int a, int b, int c) { member1 = a; member2 = c; member3 = b + c; member4 = c + a; };
		~a() { std::cout << "Object of class 'a' got deleted"; };
};

// private members of a base class (here 'a') are not accessible by the derived classes 

// public inheritance: public members of base class (here 'a') become public members of the derived class (here 'b') and protected members become protected members
class b : public a
{
	public:
		int sum() { return this->member3 + this->member2; }
};
// protected inheritance: public, protected -> protected
class c : protected a
{
	int product() { return this-> member2 * this->member3; }
};
// private inheritance: public, protected -> private
class e : protected a
{
	int power() { return std::pow(this-> member2, this->member3); }
};

class d
{
	protected:
		int D;
};

// multiple inheritance
class j : public a, public d
{
	int J;
};