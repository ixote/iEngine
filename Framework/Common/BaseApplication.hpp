#pragma once
#include "IApplication.hpp"

namespace I {
class BaseApplication : public IApplication {
public:
    virtual int Initialize();
    virtual void Finalize();
    // One cycle of the main loop
    virtual void Tick();

    virtual bool IsQuit();

protected:
    // Flag if need quit the main loop of the application
    bool i_bQuit;
};
}