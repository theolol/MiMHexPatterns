/*******************************************************************************
 *                              Bartosz Borkowski                              *
 *              Faculty of Mathematics, Informatics and Mechanics              *
 *                              Warsaw University                              *
 *                             9th March 2010                                  *
 *******************************************************************************/

#ifndef MIMHEX_MACRO_DEFINITIONS_H_
#define MIMHEX_MACRO_DEFINITIONS_H_

#include "board.h"

namespace HexPatterns
{
    #define rep(iterator, upper_bound)                                              \
        for (uint iterator = 0; iterator < upper_bound; ++iterator)

    #define rep2(iterator, lower_bound, upper_bound)                                \
        for (uint iterator = lower_bound; iterator < upper_bound; ++iterator)

    #define GUARDED_POSITION(row, column)                                           \
        ((row + 1) * Hex::kBoardSizeAligned + (column + 1))

    #define NORMALISED_POSITION(row, column)                                        \
        ((row + 2) * Hex::kBoardSizeAligned + (column + 2))

    #define TEMPLATES_AMOUNT        1
    #define TEMPLATES_FILE          "template.data"

    #define PATTERNS_AMOUNT         (Hex::kFieldsAlignedAmount)
    #define PATTERNS_FILE           "pattern.data"

    #define MAX_PATTERNS            8

    #define FIELD_STATES            4

    #define PLAYER_0_STATE          0
    #define PLAYER_1_STATE          1
    #define GUARDIAN_STATE          2
    #define EMPTY_STATE             3

    typedef uint Hash;

    const uint kHashMemory = Hex::kFieldsAlignedAmount * FIELD_STATES * sizeof(Hash);
} // namespace HexPatterns

#endif