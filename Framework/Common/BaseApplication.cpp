#include "BaseApplication.hpp"

int fc::BaseApplication::Initialize()
{
    m_bQuit = false;
    return 0;
}

void fc::BaseApplication::Finalize()
{
    
}

void fc::BaseApplication::Tick()
{

}

bool fc::BaseApplication::IsQuit()
{
    return m_bQuit;
}
