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

enum class graphics_platform : u32
{
	direct3d12 = 0,
};

bool initialize(graphics_platform platform);
void shutdown();
void render();

}