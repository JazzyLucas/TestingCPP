/*
 * Lucas is learning C++ :flushed:
 * Next will be Unreal Engine >:)
 *
 * This is going to be a mess btw
 */

#include <iostream>
#include "menus/atm.h"
#include "menus/story.h"
#include "menus/vectors.h"
#include "menus/raii.h"
using namespace std; // There was a video I watched on YouTube that suggested against this, but I still did it anyways.

enum ProgramState
{
    START_MENU,
    ATM,
    STORY,
    VECTORS,
    RAII,
    QUIT
};

void ProgramLoop()
{
    ProgramState state = START_MENU;
    while (true)
    {
        switch (state) {
            case START_MENU:
                // TODO: begin here next time Lucas
                return;
                break;
            case ATM:

                break;
            case STORY:

                break;
            case VECTORS:

                break;
            case RAII:

                break;
            default:

                return;
        }
    }
    cout << "Bye bye!" << "\n";
}

int main() {
    ProgramLoop();
    return 0;
}

