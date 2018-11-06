#pragma once

#include <vulkan/vulkan.h>
#include <vector>

class Renderer
{
public:
	Renderer();
	~Renderer();

private:
	void _InitInstance();
	void _DeInitInstance();

	void _InitDevice();
	void _DeInitDevice();

	void _SetupDebug();
	void _InitDebug();
	void _DeInitDebug();

	VkInstance _instance = nullptr;
	VkDevice _device = nullptr;
	VkPhysicalDevice _gpu = nullptr;
	VkPhysicalDeviceProperties _gpu_properties {};
	
	uint32_t _graphics_familiy_index;

	std::vector<const char*> _instance_layers;
	std::vector<const char*> _instance_extensions;

	VkDebugReportCallbackEXT _debug_report = nullptr;
	VkDebugReportCallbackCreateInfoEXT debug_callback_create_info{};
};

