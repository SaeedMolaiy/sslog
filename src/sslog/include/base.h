#ifdef SSLOG_PLATFORM_WINDOWS

	#ifdef SSLOG_BUILD_DLL

		#define SSLOG_API __declspec(dllexport)

	#else

		#define SSLOG_API __declspec(dllimport)

	#endif

#endif