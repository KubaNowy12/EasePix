#pragma once
#include "CommonHeaders.h"
#if !defined(SHIPPING)
namespace easepix::content {
bool load_game();
void unload_game();
}
#endif