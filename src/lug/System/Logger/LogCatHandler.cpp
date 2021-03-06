#include <lug/System/Logger/LogCatHandler.hpp>

namespace lug {
namespace System {

LogCatHandler::LogCatHandler(const std::string& name) : Handler(name) {}

void LogCatHandler::handle(const priv::Message& msg) {
    __android_log_write(lugLevelToLogCatPrio(msg.level), msg.loggerName.c_str(), msg.formatted.c_str());
}

void LogCatHandler::flush() {
    // Not applicable
}

android_LogPriority LogCatHandler::lugLevelToLogCatPrio(Level level) {
    switch (level) {
        case lug::System::Level::Off:       return ANDROID_LOG_SILENT;
        case lug::System::Level::Debug:     return ANDROID_LOG_DEBUG;
        case lug::System::Level::Info:      return ANDROID_LOG_INFO;
        case lug::System::Level::Warning:   return ANDROID_LOG_WARN;
        case lug::System::Level::Error:     return ANDROID_LOG_ERROR;
        case lug::System::Level::Fatal:     return ANDROID_LOG_FATAL;
        case lug::System::Level::Assert:    return ANDROID_LOG_FATAL;
    }
    return ANDROID_LOG_UNKNOWN;
}

} // namespace lug
} // namespace System
