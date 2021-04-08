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
};
//class definitions are usally stored in external files called headerfiles 'HEADERFILENAME.h', all members of the class are usally only declared in it.
//the definition and the implementation is then stored in a source file usally named like 'FILENAME.cpp'

// definition of the constructor (both versions are equivalent in thei function)
abstract_thing::abstract_thing(int val1) { member1 = val1; }
abstract_thing::abstract_thing(int val1): member1(val1) { }

abstract_thing::~abstract_thing() { std::cout << "deleting object of class abstract_thing" << std::endl; }

// object initilisation
abstract_thing object_in_stack_memory();
abstract_thing alias_to_object_in_heap_memory = abstract_thing(1);
abstract_thing* pointer_to_object_in_heap_memory = new abstract_thing(1);