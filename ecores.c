#include <stdio.h>

#if 1
#include "libs/ximage.h"
#include "libs/xdraw.h"
#include "stdlib.h"
#else
#define   X_FULL
#include "xpaint.h"
#endif


int main() {
    //teste de cores
    x_open(600, 600);
    xs_font_size(70);

    xs_color(BLACK);
    xd_filled_rect(20, 60, 580, 470);
    //xd_filled_triangle(20, 60, 280, 460, 280, 60);
    xs_color(WHITE);
    xd_filled_rect(190, 70, 390, 410);

    int x = 300;
    xs_color(RED);    x_write(20, 70, "    RED");
    xs_color(GREEN);  x_write(x, 70,  "GREEN");
    xs_color(BLUE);   x_write(20, 140,"   BLUE");
    xs_color(YELLOW); x_write(x, 140, "YELLOW");
    xs_color(CYAN);   x_write(20, 210,"   CYAN");
    xs_color(MAGENTA);x_write(x, 210, "MAGUENTA");
    xs_color(VIOLET); x_write(20, 280," VIOLET");
    xs_color(ORANGE); x_write(x, 280, "ORANGE");
    xs_color(BLACK);  x_write(x - 100, 350, "BLACK");
    xs_color(WHITE);  x_write(x - 100, 410, "WHITE");
    char * colors = "rgbymcwkvo";
    x = 50;
    xs_font_size(100);
    for(int i = 0; i < 10; i++){
        xs_color(xg_palette(colors[i]));
        x = x_write(x, 500, "%c", colors[i]);
    }

    xs_font_size(25);
    xs_color(WHITE);
    x_write(40, 20, "cores.png : Cores do copiadas do solarized.");
    x_write(40, 480, "Na paleta, cada letra corresponde a uma cor.");
    // e seus respectivos caracteres na paleta de cores

    x_save("exemplo_cores");

    x_close();
    return 0;
}


