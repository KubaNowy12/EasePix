#pragma once
#include "CommonHeaders.h"
#include "..\Platform\Window.h"

namespace easepix::graphics {

class surface
{ };

struct render_surface
{
	platform::window window{};
	surface surface{};
};
}