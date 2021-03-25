#include <iostream>
#include "../include/node.hpp"
#include "../../myclass/include/MyClass.hpp"

Node::Node() :
    node2_() {
        std::cout << "node" << std::endl;

        std::shared_ptr<MyClass> p = std::make_shared<MyClass>();
        node2_.fn2(p);

        //node2_.fn(myClass_);
        //node2_.fn(myClass_);
        //delete myClass_;

        if (nullptr == myClass_) {
            std::cerr << "Couldn't allocate memory for a myClass" << std::endl;
            abort();
        }
}

Node::~Node() = default;