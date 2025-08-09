#pragma once

namespace sslog
{
	enum class log_type : unsigned char
	{
		assert,
		debug,
		info,
		warning,
		error,
		critical,
	};
}