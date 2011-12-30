/*
 * triangle.cpp
 * 
 * Copyright 2011 Maik Wöhl <maik.woehl@web.de>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 2011/12/29
 */

#include "std_lib_facilities.h"
#include "opengl_bindings.h"

bool pollEvents();

int main(int argc, char **argv)
{
    if( SDL_Init( SDL_INIT_VIDEO ) != 0 ) // Initialisieren des SDL Video Subsystems
    {
        cerr << "Die SDL konnte nicht initalisiert werden (" << SDL_GetError() << ")" << endl;
        return 1;
    }

    cout << "Willkommen zum SDL Testprogramm." << endl;

    SDL_WM_SetCaption("Mein Prog", "Mein Proggy"); // Titel setzen
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1); // Doublebuffer fuer fluessigen Spielverlauf
    SDL_SetVideoMode(640,420,32,SDL_OPENGL);

    // Endlosschleife zum Offen halten.

    while(true)
    {
    
        if (!pollEvents()) break;
        
        // Anweisungen
        
        glClearColor(1.0, 0.0, 0.0, 0.0); // Loeschfarbe setzen
        glClear(GL_COLOR_BUFFER_BIT); // Buffer loeschen
    
        glMatrixMode(GL_PROJECTION); // Matrix setzen
        glLoadIdentity(); // Matrixitentitaet laden
    
        glOrtho(0, 800, 600, 0, -1, 1);
    
        // Dreieck zeichnen
        glBegin(GL_TRIANGLES); 
    
        glColor3f(1,0,0); // Farbe rot
        glVertex3f(400,100,0); // Coord. 400:100:0
    
        glColor3f(0,1,0); // Farbe gruen
        glVertex3f(750, 500, 0); // Coord. 750:500:0
    
        glColor3f(0,0,1); // Farbe blau
        glVertex3f(50, 500, 0); // Coord. 50:500:0
    
        glEnd();
    
    
        SDL_GL_SwapBuffers(); // Bildpuffer umtauschen
        
        
    }

    SDL_Quit(); // Herunterfahren der SDL Bibliotheken
    return 0;
}

/*
 * 
 * name: pollEvents
 * @param void
 * @return true
 * 
 */
bool pollEvents()
{
    
    SDL_Event event;
       
    while (SDL_PollEvent(&event))
    {
        switch(event.type)
        {
            case SDL_QUIT:
                SDL_Quit();
                exit(0);
                break;
            default:
                break;
        }
    }   
    
    return true;
}

