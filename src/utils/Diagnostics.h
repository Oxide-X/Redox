#pragma once
#include <string>

namespace Redox::Utils {
class Diagnostics {
public:
    static void error(size_t line, const std::string& message);
    static void warning(size_t line, const std::string& message);
};
} // namespace Redox::Utils
