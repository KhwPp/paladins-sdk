#pragma once
#if defined( _WIN32 ) || defined( _WIN64 )
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif
#include <intrin.h>
#include <fstream>
#include <array>
#include <vector>
#include <deque>
#include <thread>
#include <algorithm>
#include <functional>
#include <optional>
#include <filesystem>
#include <type_traits>
#include <semaphore>
#include <future>
#include <minwindef.h>
#include <WinBase.h>
#include "util.hpp"