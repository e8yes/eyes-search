#ifndef UTILS_H
#define UTILS_H


#include <vector>
#include <iterator>
#include <utility>
#include <cstdint>
#include "mapbptree.h"

namespace engine
{

namespace util
{

uint64_t hash(const char* s, uint64_t seed = 0);

}

}

#endif // UTILS_H
