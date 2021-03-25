#include <iostream>
#include "../include/node2.hpp"

Node2::Node2() {
    std::cout << "node2" << std::endl;
}

void Node2::fn(MyClass* myClass) {
    myClass = new MyClass();
    myClass->doSomething();
    if (nullptr == myClass) {
        std::cerr << "Couldn't allocate memory for a myClass" << std::endl;
        abort();
    }
    delete myClass;
}

void Node2::fn2(std::shared_ptr<MyClass> p) {
    p->doSomething();
    if (nullptr == p) {
        std::cerr << "Couldn't allocate memory for a myClass" << std::endl;
        abort();
    }
    std::cout << "shared pointer" << std::endl;
}

Node2::~Node2() = default;
