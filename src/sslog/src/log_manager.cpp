#include "memory_macros.h"
#include "log_manager.h"

namespace sslog
{
	log_manager::log_manager(const log_type& loggerLevel)
	{
		set_logger_level(loggerLevel);
	}

	log_manager::log_manager() : log_manager(log_type::warning)
	{
	}

	void log_manager::set_logger_level(const log_type& loggerLevel)
	{
		SAFE_DELETE(_loggerLevel);

		_loggerLevel = new log_type(loggerLevel);
	}

	log_manager::~log_manager()
	{
		SAFE_DELETE(_loggerLevel);
	}
}