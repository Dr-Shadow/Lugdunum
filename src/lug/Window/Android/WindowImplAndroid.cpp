#include <lug/Window/Android/WindowImplAndroid.hpp>

namespace lug {
namespace Window {
namespace priv {

std::queue<lug::Window::Event> lug::Window::priv::WindowImpl::events;
AInputQueue *lug::Window::priv::WindowImpl::inputQueue = nullptr;

WindowImpl::WindowImpl(Window*) {}

bool WindowImpl::create(const std::string&, Style) {
    return true;
}

void WindowImpl::close() {}

bool WindowImpl::pollEvent(lug::Window::Event& event) {

    if (inputQueue != nullptr) {
        AInputEvent *androidEvent = nullptr;
        while (AInputQueue_getEvent(inputQueue, &androidEvent) >= 0) {
            if (AInputQueue_preDispatchEvent(inputQueue, androidEvent)) {
                continue;
            }

            AInputQueue_finishEvent(inputQueue, androidEvent, 0);
        }
    }

    if (!events.empty()) {
        event = events.front();
        events.pop();
        return true;
    }

    return false;
}

} // namespace priv
} // namespace Window
} // namespace lug
