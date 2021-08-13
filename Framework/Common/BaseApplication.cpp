#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int I::BaseApplication::Initialize()
{
    i_bQuit = false;

    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files.
void I::BaseApplication::Finalize()
{
}

// One cycle of the main loop
void I::BaseApplication::Tick()
{
}

bool I::BaseApplication::IsQuit()
{
    return i_bQuit;
}
