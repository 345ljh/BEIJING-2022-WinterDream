#include <math.h>

#include "graphics.h"

#define mul(a) (a)*(a)
#define up(a) ( (a) < 0 ? (a) + 360 : (a) )

void Symbol(void);

int main()
{
    initgraph(300, 450);
    setbkcolor(WHITE);

    PIMAGE img = newimage();
    getimage(img, "add.png");
    putimage_alphablend(NULL, img, 0, 50, 255);
    Symbol();

    getch();
    return 0;
}


void Symbol(void)
{
    setcolor(EGERGB(39, 74, 137));

    for(double i = 158.7; i >= 103.4; i -= 0.1)
    {

        line(i, 125.2 - sqrt(mul(108) - mul(i - 152.2)), i, 113.7 - sqrt(mul(108) - mul(i - 205.6)));
        delay_fps(1000);
    }

    for(double i = 103.4; i >= 75.7; i -= 0.1)
    {
        line(i, 125.2 - sqrt(mul(108) - mul(i - 152.2)), i, 1.16 * i - 39.5);
        delay_fps(1000);
    }

    setcolor(EGERGB(190, 25, 46));

    for(double i = 103.3; i <= 122.7; i += 0.1)
    {
        line(i, 113.7 - sqrt(mul(108) - mul(i - 205.6)), i, 0.063 * i + 73.3);
        delay_fps(1000);
    }

    for(double i = 122.7; i <= 220.6; i += 0.1)
    {
        line(i, 336.6 - sqrt(mul(291) - mul(i - 133.2)), i, 0.063 * i + 73.3);
        delay_fps(1000);
    }

    for(double i = 220.6; i <= 235.7; i += 0.1)
    {
        line(i, 2.03 * i - 389.1, i, 0.063 * i + 73.3);
        delay_fps(1000);
    }

    setcolor(EGERGB(41, 72, 133));

    for(double i = 235.7; i >= 138.1; i -= 0.1)
    {
        line(i, 0.063 * i + 73.3, i, 524.7 - sqrt(mul(438) - mul(i - 263.5)));
        delay_fps(1000);
    }

    for(double i = 138.1; i >= 31.9; i -= 0.1)
    {
        line(i, 312.8 - sqrt(mul(244) - mul(i - 216.2)), i, 524.7 - sqrt(mul(438) - mul(i - 263.5)));
        delay_fps(1000);
    }

    for(double i = 21.5; i <= 283.8; i += 0.1)
    {
        if(i <= 36.9)
        {
            setcolor(hsl2rgb(137 * 1.5, (0.49 * i + 109.5) / 240.0, (0.367 * i + 82.9) / 240.0));
            line(i, 582.5 - sqrt(mul(488) - mul(i - 285.5)), i, 1.55 * i + 138.9);
        }
        else if(i > 36.9 && i <= 104)
        {
            setcolor(hsl2rgb(137 * 1.5, (0.49 * i + 109.5) / 240.0, (0.367 * i + 82.9) / 240.0));
            line(i, 582.5 - sqrt(mul(488) - mul(i - 285.5)), i, -0.55 * i + 216.1);
        }
        else if(i > 104 && i <= 114.7)
        {
            setcolor(hsl2rgb(137 * 1.5, (0.49 * i + 109.5) / 240.0, (0.367 * i + 82.9) / 240.0));
            line(i, 582.5 - sqrt(mul(488) - mul(i - 285.5)), i, 494.3 - sqrt(mul(402) - mul(i - 327.5)));
        }
        else if(i > 114.7 && i <= 161.3)
        {
            setcolor(hsl2rgb(up( (-0.38 * i + 89.5) * 1.5), 135 / 240.0, (-0.49 * i + 225.9) / 240.0));
            line(i, 582.5 - sqrt(mul(488) - mul(i - 285.5)), i, -335.8 + sqrt(mul(464) - mul(i - 176.8)));
            setcolor(hsl2rgb(137 * 1.5, (0.49 * i + 109.5) / 240.0, (0.367 * i + 82.9) / 240.0));
            line(i, -335.8 + sqrt(mul(464) - mul(i - 176.8)), i, 494.3 - sqrt(mul(402) - mul(i - 327.5)));
        }
        else
        {
            setcolor(hsl2rgb(up( (-0.38 * i + 89.5) * 1.5), 135 / 240.0, (-0.49 * i + 225.9) / 240.0));
            line(i, 582.5 - sqrt(mul(488) - mul(i - 285.5)), i, 494.3 - sqrt(mul(402) - mul(i - 327.5)));
        }
        delay_fps(1000);
    }

    for(double i = 104; i <= 287.6; i += 0.1)
    {
        setcolor(hsl2rgb(134 * 1.5, (-0.22 * i + 198.2) / 240.0, (0.68 * i + 17) / 240.0));
        if(i <= 159.2)
        {
            line(i, 494.3 - sqrt(mul(402) - mul(i - 327.5)), i, 252.3 - sqrt(mul(100) - mul(i - 142.8)));
        }
        else if(i > 159.2 && i <= 248.6)
        {
            line(i, -335.8 + sqrt(mul(464) - mul(i - 176.8)), i, 0.060 * i + 143.9);
        }
        else
        {
            line(i, -335.8 + sqrt(mul(464) - mul(i - 176.8)), i, 114.8 + sqrt(mul(44.5) - mul(i - 243.2)));
        }
        delay_fps(1000);
    }

    for(double i = 48; i <= 200.1; i += 0.1)
    {
        setcolor(hsl2rgb((0.67 * i - 7.6) * 1.5, 103 / 240.0, 158 / 240.0));
        if(i <= 143)
        {
            line(i, 337.2 - sqrt(mul(170) - mul(i - 146.3)), i, 389.7 - sqrt(mul(204) - mul(i - 118.4)));
        }
        else
        {
            line(i, 337.2 - sqrt(mul(170) - mul(i - 146.3)), i, 305 - sqrt(mul(129) - mul(i - 196.3)));
        }
        delay_fps(1000);
    }

    for(double i = 200.1; i >= 98.9; i -= 0.1)
    {
        setcolor(EGERGB(67, 171, 196));
        if(i >= 133.2)
        {
            line(i, 305 - sqrt(mul(129) - mul(i - 196.3)), i, 271.4 - sqrt(mul(99) - mul(i - 227)));
        }
        else
        {
            line(i, 305 - sqrt(mul(129) - mul(i - 196.3)), i, -89.2 + sqrt(mul(367) - mul(i - 295.5)));
        }
        delay_fps(1000);
    }

    for(double i = 98.9; i <= 230.6; i += 0.1)
    {
        setcolor(EGERGB(32, 78, 135));
        if(i <= 213.5)
        {
            line(i, -89.2 + sqrt(mul(367) - mul(i - 295.5)), i, 152 + sqrt(mul(138.5) - mul(i - 219.3)));
        }
        else
        {
            line(i, -89.2 + sqrt(mul(367) - mul(i - 295.5)), i, -1.06 * i + 516.3);
        }
        delay_fps(1000);
    }

}
