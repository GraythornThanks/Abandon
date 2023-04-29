#pragma once

#ifdef AB_PLATFORM_WINDOWS
	#ifdef AB_BUILD_DLL
		#define ABANDON_API __declspec(dllexport)
	#else
		#define ABANDON_API __declspec(dllimport)
	#endif
#else
	#error Abandon only support Windows!

	


#endif