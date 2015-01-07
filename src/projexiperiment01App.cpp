#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class projexiperiment01App : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void projexiperiment01App::setup()
{
}

void projexiperiment01App::mouseDown( MouseEvent event )
{
}

void projexiperiment01App::update()
{
}

void projexiperiment01App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( projexiperiment01App, RendererGl )
