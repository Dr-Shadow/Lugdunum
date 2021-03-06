#pragma once

#include <lug/Window/Window.hpp> // I include Window.hpp before Xlib because Xlib is dumb
#include <X11/XKBlib.h>
#include <X11/Xlib.h>

namespace lug {
namespace Window {
namespace priv {

class WindowImpl {
public:
    WindowImpl(Window*);
    ~WindowImpl() = default;

    WindowImpl(const WindowImpl&) = delete;
    WindowImpl(WindowImpl&&) = delete;
    WindowImpl& operator=(const WindowImpl&) = delete;
    WindowImpl& operator=(WindowImpl&&) = delete;

    bool create(const std::string& title, Style style);
    void close();

    bool pollEvent(lug::Window::Event& event);
    void setKeyRepeat(bool state);

private:
    void setWindowDecorations(Style style);
    bool shouldIgnoreRepeated(XEvent& xEvent);

private:
    Window* _parent{nullptr};

    Display* _display{nullptr};
    ::Window  _window{0};

    Atom _wmProtocols;
    Atom _wmDeleteWindow;
    Atom _wmHints;

    bool _keyRepeat{true};
};

} // namespace priv
} // namespace Window
} // namespace lug
