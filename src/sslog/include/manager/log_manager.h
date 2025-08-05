#pragma once

#include "log_type.h"

#include "options/console_logger_options.h"
#include "options/file_logger_options.h"

namespace sslog
{
	class log_manager
	{

	private:
		log_type* _loggerLevel = nullptr;

	public:
		log_manager(const log_type& loggerLevel);
		log_manager();

	public:
		void set_logger_level(const log_type& loggerLevel);

	public:
		void add_console_logger(const console_logger_options& options);
		void add_file_logger(const file_logger_options& options);

	public:
		~log_manager();
	};
}