#define TASK 3

#include <iostream>
#include <map>
#include "node.h" // "node.h" should actually be used

int guard = 0;

int main()
{
	#if TASK == 1
	// 1.1
	node root = node("root"); // in stack memory
	root.add_child(new node("left_child")); //new node(...)implies the node instance is saved in heap memory
	root.add_child(new node("right_child"));
	
	// 1.2
	#elif TASK == 2
	node *complete_tree = node::create_complete_tree(2, 4);
	complete_tree->print();
	std::cout << (*complete_tree);
	
	// 1.3
	#elif TASK == 3
	// node *root = node::create_complete_tree(2,3);
	node* a = new node();
	node* b = new node();
	node* c = new node();
	node* d = new node();
	node* e = new node();
	a->add_child(b);
	b->add_child(c);
	c->add_child(d);
	d->add_child(e);
	e->add_child(a);
	std::map<node*, bool> Visited;
	node::depth_first_safe(a, Visited);
	delete a;
	a = NULL;
	delete b;
	b = NULL;
	delete c;
	c = NULL;
	delete d;
	d = NULL;
	delete e;
	e = NULL;
	std::cout << a << b << c << d << e;
	#else
	std::cout << "No task has been selected via the variable TASK in the preprocessor statement"
	#endif
}