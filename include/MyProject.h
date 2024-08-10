#pragma once

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

class MyProject : public ci::app::App {
public:
    void setup() override;
    void draw() override;
};