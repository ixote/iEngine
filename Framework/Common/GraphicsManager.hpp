#pragma once
#include "IRuntimeModule.hpp"
// 图形模块的骨架
namespace I {
class GraphicsManager : public IRuntimeModule {
public:
    virtual ~GraphicsManager() { }
};
}