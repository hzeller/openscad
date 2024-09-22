#pragma once

#include <memory>

#include "glview/OffscreenContext.h"

std::shared_ptr<OffscreenContext> CreateOffscreenContextCGL(size_t width, size_t height,
							    size_t majorGLVersion, size_t minorGLVersion);
