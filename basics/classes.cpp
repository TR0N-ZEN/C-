// all members of a class are private by default
// Private means that a member is only accessible from within its containerand children.

class abstract_thing {
	int member1;
	public: //All following declarations are public.
		int member2;
	private: //All following declarations are private.
		int member3;
};
//class definitions are usally stored in external files called headerfiles 'HEADERFILENAME.h', all members of the class are usally only declared in it.
//the definition and the implementation is then stored in a source file usally named like 'FILENAME.cpp'

abstract_thing object_in_stack();
abstract_thing object_in_heap = new abstract_thing();