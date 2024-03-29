﻿/** \file Lab_Lesson2.cpp
 *  \brief Small drawing program
 *  \details Small ASCII drawing program
 *  \author Igor
 *  \version 0.1
 *  \date 06.03.2023
 *  \copyright University of Nicosia
 */

#include <iostream>
#include <cassert>

using namespace std;

const int MAX_SHAPES = 10;

// functions prototypes
void drawHorizontalLine(int, char);
void drawVerticalLine(int, char);
void drawSquare(int, char, int);
void drawRectangle(int, int, char, int);
void drawShapes();
void initializeArrays(int[MAX_SHAPES], int[MAX_SHAPES], int[MAX_SHAPES], char[MAX_SHAPES], int[MAX_SHAPES]);

/**
* Function <code>Main</code> shows a manu and then
* accepts choice from the user.
* <BR>
* @return Returns <code>0</code>
*/
int main()
{
    int choice = 0, length, height, size, isFilled;
    char ch;

    while (choice != 6)
    {
        cout << "1) Draw a horizontal line\n"
            << "2) Draw a vertical line\n"
            << "3) Draw a square\n"
            << "4) Draw a rectangle\n"
            << "5) Draw random shapes\n"
            << "6) Quit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a length of the line: ";
            cin >> length;

            while (length <= 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> length;
            }

            cout << "Enter a character for the horizontal line: ";
            cin >> ch;

            drawHorizontalLine(length, ch);
            cout << endl;

            break;
        case 2:
            cout << "Enter a height of the line: ";
            cin >> height;

            while (height <= 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> height;
            }

            cout << "Enter a chacter for the vertical line: ";
            cin >> ch;

            drawVerticalLine(height, ch);
            cout << endl;

            break;
        case 3:
            cout << "Enter a size of the square: ";
            cin >> size;

            while (size <= 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> size;
            }

            cout << "Enter a chacter for the square: ";
            cin >> ch;

            cout << "Enter 1 for the square to be filled or 0 for the empty square: ";
            cin >> isFilled;

            while (isFilled != 0 && isFilled != 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> isFilled;
            }

            drawSquare(size, ch, isFilled);
            cout << endl;

            break;
        case 4:
            cout << "Enter a length of the rectangle: ";
            cin >> length;

            while (length <= 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> length;
            }

            cout << "Enter a heigth of the rectangle: ";
            cin >> height;

            while (height <= 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> height;
            }

            cout << "Enter a chacter for the rectangle: ";
            cin >> ch;

            cout << "Enter 1 for the rectangle to be filled or 0 for the empty rectangle: ";
            cin >> isFilled;

            while (isFilled != 0 && isFilled != 1)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> isFilled;
            }

            drawRectangle(height, length, ch, isFilled);
            cout << endl;

            break;
        case 5:
            drawShapes();

            break;
        case 6:
            cout << "Goodbye!" << endl;

            break;
        default:
            cout << "Invalid value for the choice!\n\n";
            break;
        }
    }

    return 0;
}

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

/**
* Function <code>drawShapes</code> draws random
* shapes with random symbols, random height, random
* length and random parameter for a shape to be filled
* or not.
*/
void drawShapes()
{
    int fun[MAX_SHAPES], length[MAX_SHAPES], height[MAX_SHAPES], isFilled[MAX_SHAPES];
    char ch[MAX_SHAPES];
    
    cout << endl;

    for (int i = 0; i < MAX_SHAPES; i++)
    {
        initializeArrays(fun, length, height, ch, isFilled);

        switch (fun[i])
        {
        case 1:
            drawHorizontalLine(length[i], ch[i]);
            cout << endl;

            break;
        case 2:
            drawVerticalLine(length[i], ch[i]);
            cout << endl;

            break;
        case 3:
            drawSquare(length[i], ch[i], isFilled[i]);
            cout << endl;

            break;
        case 4:
            drawRectangle(height[i], length[i], ch[i], isFilled[i]);
            cout << endl;

            break;
        default:
            assert(false);
            cout << "Invalid value for the choice!\n\n";
            break;
        }
    }
}

/**
* Function <code>initializeArrays</code> fills arrays
* with random values in the function drawShapes
* @param shapeTy[] The array of shape types [1 <= && <= 4]
* @param shapeLen[] The array of shapes length [1 <= && <= 20]
* @param shapeHei[] The array of shapes height [1 <= && <= 20]
* @param shapeCh[] The array of shape symbols [33 <= && <= 126]
* @param shapeFill[] The array of values to define if
* the shape is filled or not [0 <= && <= 1]
*/
void initializeArrays(int shapeTy[MAX_SHAPES], int shapeLen[MAX_SHAPES], int shapeHei[MAX_SHAPES], char shapeCh[MAX_SHAPES], int shapeFill[MAX_SHAPES])
{
    srand(time(0));

    for (int i = 0; i < MAX_SHAPES; i++)
    {
        shapeTy[i] = rand() % 4 + 1;
        shapeLen[i] = rand() % 19 + 2;
        shapeHei[i] = rand() % 19 + 2;
        shapeCh[i] = rand() % 94 + 33;
        shapeFill[i] = rand() % 2;
    }
}