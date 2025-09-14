// Created by Piyush 23CH
#ifndef RUBIKCUBESOLVER_CORNERPATTERNDB_H
#define RUBIKCUBESOLVER_CORNERPATTERNDB_H
#include "../RubikCube.h"
#include "patternDB.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDB : public PatternDB
{

    typedef RubikCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDB();
    CornerPatternDB(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubikCube &cube) const;
};

#endif // RUBIKCUBESOLVER_CORNERPATTERNDB_H
