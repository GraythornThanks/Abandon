#pragma once

#include "Core.h"

namespace Abandon
{
	class ABANDON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();


}