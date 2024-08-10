#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MyProject : public App {
public:
    void setup() override;
    void draw() override;
};

void MyProject::setup() {
    // Initialize your project here
}

void MyProject::draw() {
    gl::clear( Color( 0, 0, 0 ) ); // Clear the window with black
    // Add your drawing code here
}

CINDER_APP(MyProject, RendererGl)