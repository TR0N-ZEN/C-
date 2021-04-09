#include <iostream> // needed for 'std::cout' ...

// all members of a class are private by default
// Private means that a member is only accessible from within its containerand children.

class abstract_thing
{
	// members are private by default
	int member1;
	public: //All following declarations are public.
		int member2;
	private: //All following declarations are private.
		int member3;
	public:
		// declaration of the constructor (constructor should be public else it may only be called by objects of child classes or maybe only by an object of its class if at all)
		abstract_thing(int val_1);
		// decalaration of the destructor which is called after an object of this class runs out of scope or 'delete' is called upon it
		~abstract_thing();
		// definition of a function
		int f20() { return member1; }
		// declaring friend member function
		friend int f10(abstract_thing a);
		// definition of a function involving keyword 'this' (this is apointer to the object the enclosing function was called upon)
		int compare(abstract_thing a) { return this->f20() > a.member1; }
		// static variable members are a single value shared by all objects, it can't be initilalised inside the class (but outside uing '::' to clarify the class the variable resides to) and will be initalised with 0 for int by default;
		static int x;
		// static function members are executable without the need for existence of an object of this class
		static int f30(int a) { return a + 30; }
		// overloading member functions
		abstract_thing operator+(abstract_thing& a) // orperator+ function is static
	{
		abstract_thing c(4);
		c.member1 = a.member1 + this->member1;
		return c;
	}
};
// definition of a function - which is already taken as a friend for a class meaning it can access all members of the class which considers it a friend
int f10(abstract_thing a) { return a.member1 + a.member3; }
//class definitions are usally stored in external files called headerfiles 'HEADERFILENAME.h', all members of the class are usally only declared in it.
//the definition and the implementation is then stored in a source file usally named like 'FILENAME.cpp'

// definition of the constructor (both versions are equivalent in thei function)
abstract_thing::abstract_thing(int val1) { member1 = val1; }
abstract_thing::abstract_thing(int val1): member1(val1) { }

abstract_thing::~abstract_thing() { std::cout << "deleting object of class abstract_thing" << std::endl; }

//object copying
abstract_thing::abstract_thing(const abstract_thing& x) // 'const' seems to be necessary
{
	member1 = x.member1;
	member2 = x.member2;
	member3 = x.member3;
}
//object copying is used when objects are passed as formal parameters, then the according function will work on copy of the object instead of the object itself, which can be changed by using reference to the object instead of the object itself


// object initilisation
abstract_thing object_in_stack_memory(1);
abstract_thing alias_to_object_in_heap_memory = abstract_thing(4);
abstract_thing* pointer_to_object_in_heap_memory = new abstract_thing(2);