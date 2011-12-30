/*
 * quad.cpp
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
 */

#include "std_lib_facilities.h"
#include "opengl_bindings.h"

bool pollEvents();
void drawOnBuffer();

int main(int argc, char **argv)
{
    if( SDL_Init( SDL_INIT_VIDEO ) != 0 ) // Initialisieren des SDL Video Subsystems
    {
        cout << "Die SDL konnte nicht initalisiert werden (" << SDL_GetError() << ")" << endl;
        return 1;
    }

    cout << "Willkommen zum SDL Testprogramm." << endl;

    SDL_WM_SetCaption("Mein Prog", "Mein Proggy"); // Titel setzen
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1); // Doublebuffer fuer fluessigen Spielverlauf
    SDL_SetVideoMode(640,420,32,SDL_OPENGL);

    glClearColor( 1.0, 0.5, 0.4, 0.0 ); // Loeschfarbe setzen
    
    glMatrixMode(GL_MODELVIEW); // Matrix setzen
    glLoadIdentity(); // Matrixitentitaet laden
    
    glEnable(GL_DEPTH_TEST);
 
    glFrustum( -1.6, 1.6, -1.2, 1.2, 1.5, 6.5 );

    // Endlosschleife zum Offen halten.

    while(true)
    {
    
        if (!pollEvents()) break;
        drawOnBuffer();
        
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

void drawOnBuffer()
{
    
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Buffer loeschen
    
    
    glBegin( GL_QUADS ); // Wir bauen den Würfel aus Quadraten (Quads) auf

    glColor3f(1, 0, 0);   // Ab jetzt werden alle gezeichneten Punkte rot
      glVertex3f( 1,  1, -1);
      glVertex3f( 1, -1, -1);
      glVertex3f(-1, -1, -1);
      glVertex3f(-1,  1, -1);

    glColor3f(0, 1, 0);   // Ab jetzt werden alle gezeichneten Punkte grün
      glVertex3f( 1,  1,  1);
      glVertex3f(-1,  1,  1);
      glVertex3f(-1, -1,  1);
      glVertex3f( 1, -1,  1);

    glColor3f(0, 0, 1);
      glVertex3f( 1,  1, -1);
      glVertex3f( 1,  1,  1);
      glVertex3f( 1, -1,  1);
      glVertex3f( 1, -1, -1);

    glColor3f(1, 1, 0);
      glVertex3f( 1, -1, -1);
      glVertex3f( 1, -1,  1);
      glVertex3f(-1, -1,  1);
      glVertex3f(-1, -1, -1);

    glColor3f(0, 0.5, 1  );
      glVertex3f(-1, -1, -1);
      glVertex3f(-1, -1,  1);
      glVertex3f(-1,  1,  1);
      glVertex3f(-1,  1, -1);

    glColor3f(1, 0.1, 0.8);
      glVertex3f( 1,  1,  1);
      glVertex3f( 1,  1, -1);
      glVertex3f(-1,  1, -1);
      glVertex3f(-1,  1,  1);

    glEnd(); // Wir sind fertig mit dem Zeichnen
    
    
       
    glTranslatef(0,0,-3.5); // Um 3.5 Einheiten in den
                            // Bildschirm hinein verschieben.
    glRotatef(60,1,1,0);    // 60° um die Achse (1,1,0)
                            // rotieren
    
    
    SDL_GL_SwapBuffers(); // Bildpuffer umtauschen

}
