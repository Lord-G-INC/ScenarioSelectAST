#include "syati.h"

void playScenarioSelectAST (const char *, bool) {
    MR::startSubBGM("MBGM_SMG2_GALAXY_08", false);
}
kmCall(0x80453154, playScenarioSelectAST);
