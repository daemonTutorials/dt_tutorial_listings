/*
 * Title: Grafical X11
 * Author: Maik
 * Date: 2011/29/12
 * g++ Command: g++ grafic_11.cpp -o grafic_x11 -L/usr/X11R6/lib -lX11 -I/usr/X11R6/include
 * depends=('/c++/std_lib_facilities.h')
 */
 
#include "std_lib_facilities.h"
#include <X11/Xlib.h> // X11 Librarys
#include <X11/Xutil.h>
#include <unistd.h>



int main()
{
    Display *dpy;
    int done = 0;
    char WIN_NAME[10] = "TEST";
    char WIN_CLASS[10] = "test";
    char WIN_TITLE[10] = "X11-Test";
    
    if ((dpy = XOpenDisplay(NULL)) == NULL)
    {
        cout << "Unable to connect to Display" << endl;
        return 1;
    }
    
    // Window Initialization
    Window win;
    
    win = XCreateSimpleWindow(dpy, DefaultRootWindow(dpy), 0, 0, 400, 300, BlackPixel(dpy, DefaultScreen(dpy)), 0, WhitePixel(dpy, DefaultScreen(dpy))); // Create X11-Window Instance
    XStoreName(dpy, win, WIN_TITLE); // Set Title
    
    
    // Window Hint
    XClassHint class_hint;

    class_hint.res_name = WIN_NAME;
    class_hint.res_class = WIN_CLASS;

    XSetClassHint(dpy, win, &class_hint);

    // Window Display

    XMapWindow(dpy, win); // Display Window
    XFlush(dpy); // Screen Flush

    sleep(10000);
    
    return 0;
}
