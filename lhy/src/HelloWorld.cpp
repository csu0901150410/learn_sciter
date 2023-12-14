// HelloWorld.cpp : Defines the entry point for the application.
//

//#include "stdafx.h"
//#include "HelloWorld.h"

#include "sciter-x-window.hpp"

class frame : public sciter::window {
public:
	frame() : window(SW_TITLEBAR | SW_RESIZEABLE | SW_CONTROLS | SW_MAIN | SW_ENABLE_DEBUG) {}
};

#include "resources.cpp"

int uimain(std::function<int()> run) {

	//sciter::debug_output_console console; - uncomment it if you will need console window

	sciter::archive::instance().open(aux::elements_of(resources)); // bind resources[] (defined in "resources.cpp") with the archive

	frame* pwin = new frame();

	// note: this:://app URL is dedicated to the sciter::archive content associated with the application
	pwin->load(WSTR("this://app/main.htm"));

	pwin->expand();

	return run();
}