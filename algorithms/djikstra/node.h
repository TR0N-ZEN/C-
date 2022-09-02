enum Direction { NORTH=0, EAST=90, SOUTH=180, WEST=270 };

class Node {
  int x;
  int y;
  Direction directions[]; // Direction in which node can be entered or left.
  Node* operator+(const Node& a, const Node& b) static; // static method that returns a Node object
}


