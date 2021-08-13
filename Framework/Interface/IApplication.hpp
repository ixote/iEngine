#pragma once

#include "IRuntimeModule.hpp"
// 定义Application接口。这个接口用于抽象化不同平台的Application（并将其模块化），使得我们可以用同一个主入口(main.c)启动程序（也意味着我们可以使用同一套启动参数）
namespace I {
class IApplication : public IRuntimeModule {
public:
    virtual int Initialize() = 0;
    virtual void Finalize() = 0;
    // One cycle of the main loop
    virtual void Tick() = 0;

    virtual bool IsQuit() = 0;
    // IsQuit()，用于查询应用程序是否需要退出。这是因为，在很多平台上用户关闭应用程序都是通过系统通知过来的。我们的程序自身并不会直接进行这方面的判断。所以当我们收到这样的关闭通知的时候，我们就通过这个接口告诉主循环，我们该结束了
};
}