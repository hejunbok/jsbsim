#include <QApplication>
#include <QSplashScreen>
#include "MainWindow.hpp"

#ifndef _WIN32_WINNT
#include <X11/Xlib.h>
#endif

int main (int argc, char * argv[])
{
    #ifndef _WIN32_WINNT
	XInitThreads();
    #endif
    QApplication app(argc,argv);
	app.processEvents();
    MainWindow w;
	w.show();
    return app.exec();
}