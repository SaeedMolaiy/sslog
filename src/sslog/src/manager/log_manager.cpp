#include "memory_macros.h"

#include "manager/log_manager.h"

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

		_loggerLevel =
			new log_type(loggerLevel);
	}

	void log_manager::add_console_logger(const console_logger_options& options)
	{
	}

	void log_manager::add_file_logger(const file_logger_options& options)
	{
	}

	log_manager::~log_manager()
	{
		SAFE_DELETE(_loggerLevel);
	}
}