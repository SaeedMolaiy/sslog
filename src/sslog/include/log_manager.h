#pragma once

#include "log_type.h"

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
		~log_manager();
	};
}