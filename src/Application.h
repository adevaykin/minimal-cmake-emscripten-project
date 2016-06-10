#ifndef APPLICATION_H
#define APPLICATION_H

#include <emscripten/html5.h>
#include <emscripten/bind.h>

namespace e = emscripten;

class Application {
public:
    void Initialize();
    void SayHello();
};

EMSCRIPTEN_BINDINGS(EMTest) {
  e::class_<Application>("Application")
    .constructor()
      .function("Initialize", &Application::Initialize)
      .function("SayHello", &Application::SayHello);
}

#endif
