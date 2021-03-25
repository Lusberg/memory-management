#include <memory>

#include "../../node2/include/node2.hpp"

class Node {
public:
    /*!
     * Create node
     */
    Node();

    /*!
     * Destroy node
     */
    ~Node();

    MyClass* myClass_ = new MyClass();
    //MyClass* myClass_;

private:
    Node2 node2_;

};
