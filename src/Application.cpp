#include "Application.h"

#include <iostream>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

void Application::Initialize() {
    std::cout << "Initializing application." << std::endl;
    Assimp::Importer importer; // For test purpose
}

void Application::SayHello() {
    std::cout << "Hello!" << std::endl;
}
