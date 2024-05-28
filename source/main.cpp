#include "syati.h"

// MBGM causes issues with Beat Blocks, so STM is used instead.
void playScenarioSelectAST (const char *, bool) {
    MR::startSubBGM("STM_SMG2_GALAXY_08", false);
}
kmCall(0x80453154, playScenarioSelectAST);
