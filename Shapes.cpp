/**
* @todo fix comment blocks
*/

#include "Shapes.h"
#include <cassert>
#include <iostream>

using namespace std;

/**
* Function <code>drawHorizontalLine</code> draws a horizontal
* line.
* <BR>
* @param length The length of the horizontal line [>= 2]
* @param ch The symbol used to draw the horizntal line
*/
void drawHorizontalLine(const int length, const char ch)
{
    assert(length >= 2);
    assert(ch >= 33 & ch <= 126);

    int i = 0;

    for (i; i < length; i++)
    {
        cout << ch;
    }
    cout << endl;

    assert(length == i);
}

/**
* Function <code>drawSquare</code> draws a square
* <BR>
* @param size The dimention of the square [>= 2]
* @param ch The symbol used to draw the square
* @param isFilled The choice for the square to be
* filled with symbols or not [0 || 1]
*/
void drawSquare(const int size, const char ch, const int isFilled)
{
    assert(size >= 2); // Pre-condition
    assert(ch >= 33 && ch <= 126);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1)
            {
                cout << ch << " ";
            }
            else
            {
                if (j == 0 || j == size - 1)
                {
                    cout << ch << " ";
                }
                else if (isFilled == 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << ch << " ";
                }
            }
        }
        cout << endl;
    }
}

/**
* Function <code>drawVerticalLine</code> draws a vertical
* line.
* <BR>
* @param height The height of the vertical line [>= 2]
* @param ch The symbol used to draw the horizntal line
*/
void drawVerticalLine(const int height, const char ch)
{
    for (int i = 0; i < height; i++)
    {
        cout << ch << endl;
    }
}

/**
* Function <code>drawRectangle</code> draws a
* rectangle.
* <BR>
* @param height The height of the rectangle [>= 2]
* @param length The length of the rectangle [>= 2]
* @param ch The symbol used to draw the rectangle
* @param isFilled The choice for the rectangle to be
* filled with symbols or not [0 || 1]
*/
void drawRectangle(const int height, const int length, const char ch, const int isFilled)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == 0 || i == height - 1)
            {
                cout << ch << " ";
            }
            else
            {
                if (j == 0 || j == length - 1)
                {
                    cout << ch << " ";
                }
                else if (isFilled == 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << ch << " ";
                }
            }
        }
        cout << endl;
    }
}