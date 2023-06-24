#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Pcdv
{
	class PCDV_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define PCDV_CORE_TRACE(...) ::Pcdv::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PCDV_CORE_INFO(...)  ::Pcdv::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PCDV_CORE_WARN(...)  ::Pcdv::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PCDV_CORE_ERROR(...) ::Pcdv::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PCDV_CORE_FATAL(...) ::Pcdv::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define PCDV_TRACE(...) ::Pcdv::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PCDV_INFO(...)  ::Pcdv::Log::GetClientLogger()->info(__VA_ARGS__)
#define PCDV_WARN(...)  ::Pcdv::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PCDV_ERROR(...) ::Pcdv::Log::GetClientLogger()->error(__VA_ARGS__)
#define PCDV_FATAL(...) ::Pcdv::Log::GetClientLogger()->fatal(__VA_ARGS__)

