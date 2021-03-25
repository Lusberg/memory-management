#include <memory>

#include "../../myclass/include/MyClass.hpp"

class Node2 {
public:
    /*!
     * Create Node2
     */
    Node2();

    /*!
     * Destroy Node2
     */
    ~Node2();

    void fn(MyClass* myClass);
    void fn2(std::shared_ptr<MyClass> p);

private:

};
