#pragma once
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <string_view>

#include "paper/shared/logger.hpp"

#define INFO(str, ...) Paper::Logger::fmtLog<Paper::LogLevel::INF>(str, "BeatTogether" __VA_OPT__(, __VA_ARGS__))
#define ERROR(str, ...) Paper::Logger::fmtLog<Paper::LogLevel::ERR>(str, "BeatTogether" __VA_OPT__(, __VA_ARGS__))
#define CRITICAL(str, ...) Paper::Logger::fmtLog<Paper::LogLevel::ERR>(str, "BeatTogether" __VA_OPT__(, __VA_ARGS__))
#define DEBUG(str, ...) Paper::Logger::fmtLog<Paper::LogLevel::DBG>(str, "BeatTogether" __VA_OPT__(, __VA_ARGS__))
#define WARNING(str, ...) Paper::Logger::fmtLog<Paper::LogLevel::WRN>(str, "BeatTogether" __VA_OPT__(, __VA_ARGS__))
