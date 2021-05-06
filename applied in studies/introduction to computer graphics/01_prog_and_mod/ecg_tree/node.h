#include <iostream>
#include <vector>
#include <map>
#include <stack>


class node
{
	private:
		static int node_id;
		std::string name;
		int id;
		std::vector<node*> children;
	public:
		node (const std::string& Name = "");
		virtual ~node ();
		
		std::string get_name () const;
		int get_id () const;
		int get_nr_children () const;
		node* get_child (int i) const;
		std::vector<node*>* const get_children ();
		void print (std::ostream& ostr = std::cout, int depth = 0) const;
		
		void set_name (std::string Name);
		void add_child (node *pointer_to_new_node);
		
		static node* create_complete_tree (int nr_child_nodes, int tree_depth);
		static void depth_first_safe (node *Node, std::map<node*, bool>& Visited);
		static void traverse_iterative_safe (node *Node, std::stack<int>& Visited);
};

extern void operator<< (std::ostream& Stream, node& Node);
extern int guard;