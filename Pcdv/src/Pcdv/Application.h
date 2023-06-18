#pragma once

#include "Core.h"

namespace Pcdv {
	class PCDV_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
