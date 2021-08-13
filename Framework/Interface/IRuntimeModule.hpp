#pragma once
// 定义每个Runtime Module都应该支持的一些方法：
#include "Interface.hpp"

namespace I {
class IRuntimeModule {
public:
    virtual ~IRuntimeModule() {};
    // 虚函数的析构函数。因为是空函数，这个在Visual Studio里面不定义也是可以的。但是按照严格的C++标准，包括《C++ Primer》这本书里面的推荐做法，对于有其他虚函数的类，建议把析构函数也声明为virtual。这是因为如果不这么做，那么当使用基类指针释放派生类的实例的时候，可能导致只调用了基类的析构函数，从而产生memory leak的情况。
    virtual int Initialize() = 0;
    virtual void Finalize() = 0;
    virtual void Tick() = 0;
    // 纯虚成员函数。定义为纯虚函数的目的是强制派生类实现这些方法。可以有效避免遗漏。
};
}