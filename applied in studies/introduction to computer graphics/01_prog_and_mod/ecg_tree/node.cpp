
#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <stack>
#include "node.h"

extern int guard;

int node::node_id = 0;

node::node (const std::string& Name)
{
	std::stringstream sstr;
	sstr << ++node_id;
	(Name == "") ? ( name = "node_" + sstr.str() ) : ( name = Name );
	id = node_id;
}
node::~node() 
{
	std::cout << "enter ~node() of \"" << name << "\"\n";
	// for(node* child : children)
	// {
	// 	delete child;
	// 	child = NULL;
	// }
	std::cout << "leave ~node() of \"" << name << "\"\n";
}

std::string node::get_name () const { return name; }
int node::get_id () const { return this->id; }
int node::get_nr_children () const { return children.size(); }
node* node::get_child (int i) const { return children.at(i); }
std::vector<node*>* const node::get_children() { return &children; }
void node::print (std::ostream& ostr, int depth) const
{
	for (int i = 0; i < depth; i++) { ostr << " "; }
	ostr << this->name << "\n";
	++depth;
	for(node *child : this->children)
	{
		child->print(ostr, depth);
	}
}

void node::set_name(std::string Name) { name = Name; }
void node::add_child(node *pointer_to_new_node) { children.push_back(pointer_to_new_node); }

node* node::create_complete_tree (int nr_child_nodes, int tree_depth)
{
	node *root = new node();
	//std::cout << root->id << std::endl;
	if (tree_depth > 0)
	{
		for (int i = 0; i < nr_child_nodes; i++)
		{
			node *child = create_complete_tree(nr_child_nodes, tree_depth - 1);
			root->children.push_back(child);
		}
	}
	return root;
}

void node::depth_first_safe (node *Node, std::map<node*, bool>& Visited)
{
	if (Visited.contains(Node) && Visited[Node]) // falsely marked error cause addon doesnt know c++ standart c++20
	{
		std::cout << "Cycle detected on node with id: " << Node->get_id() << std::endl;
		for (const std::pair<node*, bool>& entry : Visited)
		{
			std::cout << entry.first << std::endl;
		}
	}
	else
	{
		Visited[Node] = true;
		for(node *child : *(Node->get_children()))
		{
			depth_first_safe(child, Visited);
		}
		Visited[Node] = false;
	}
}

void node::traverse_iterative_safe (node *Node, std::stack<int>& Visited)
{
	// Visited.push(Node); // falsely marked error cause addon doesnt know c++ standart c++20
	// for (node *child : *(Node->get_children()))
	// {
	// 	Visited.push(child); // falsely marked error cause addon doesnt know c++ standart c++20
	// }
}

void operator<<(std::ostream& stream, node& Node) { Node.print(stream); }
