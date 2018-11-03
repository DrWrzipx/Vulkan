#pragma once

#include <vulkan/vulkan.h>

class Renderer
{
public:
	Renderer();
	~Renderer();

public:
	void _InitInstance();
	void _DeInitInstance();

	void _InitDevice();
	void _DeInitDevice();
};

