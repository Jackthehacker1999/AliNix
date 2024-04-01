#include <new.hpp>
#include <log.hpp>
#include <time.hpp>
#include <proc.hpp>
#include <gui/directgui.hpp>

#include "compositor.hpp"

using namespace LIBHeisenKernel;

int main(int argc, char** argv)
{
    Compositor* mainCompositor = new Compositor();
    while(1) 
    {
        // Update cursor position with the value stored in SysInfo
        mainCompositor->curMouseX = Process::systemInfo->MouseX;
        mainCompositor->curMouseY = Process::systemInfo->MouseY;
        mainCompositor->curMouseZ = Process::systemInfo->MouseZ;

        ///////////////////////////
        // Process GUI Events
        ///////////////////////////
        mainCompositor->ProcessEvents();

        ///////////////////////////
        // Process GUI Requests from clients
        ///////////////////////////
        mainCompositor->ProcessRequests();

        ///////////////////////////
        // Draw a new version of the desktop
        ///////////////////////////
        mainCompositor->DrawFrame();

        // Update cursor variables for next run
        mainCompositor->prevMouseX = mainCompositor->curMouseX;
        mainCompositor->prevMouseY = mainCompositor->curMouseY;
        mainCompositor->prevMouseZ = mainCompositor->curMouseZ;

        // Switch processes after drawing desktop
        // It is useless to draw it like 30 times in a couple milliseconds.
        Process::Yield();
    }

    delete mainCompositor;
    return 0;
}