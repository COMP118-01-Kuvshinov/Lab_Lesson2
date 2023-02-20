// Lab_Lesson2.cpp
// name: Igor

#include <iostream>

using namespace std;

void drawHorizontalLine(int, char);
void drawVerticalLine(int, char);
void drawSquare(int, char);
void drawRectangle(int, int, char);

int main()
{
    int choice, length, height, size;
    char ch;

    cout << "1) Draw a horizontal line\n"
        << "2) Draw a vertical line\n"
        << "3) Draw a square\n"
        << "4) Draw a rectangle\n"
        << "5) Quit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter a length of the line: ";
        cin >> length;

        cout << "Enter a character for the horizontal line: ";
        cin >> ch;

        drawHorizontalLine(length, ch);

        break;
    case 2:
        cout << "Enter a height of the line: ";
        cin >> height;

        cout << "Enter a chacter for the vertical line: ";
        cin >> ch;

        drawVerticalLine(height, ch);
        break;
    case 3:
        cout << "Enter a size of the square: ";
        cin >> size;

        cout << "Enter a chacter for the square: ";
        cin >> ch;

        drawSquare(size, ch);
        break;
    case 4:
        cout << "Enter a length of the rectangle: ";
        cin >> length;
        cout << "Enter a heigth of the rectangle: ";
        cin >> height;

        cout << "Enter a chacter for the rectangle: ";
        cin >> ch;

        drawRectangle(height, length, ch);
        break;
    case 5:
        break;
    default:
        break;
    }

    return 0;
}

void drawHorizontalLine(int length, char ch)
{
    for (int i = 0; i < length; i++)
    {
        cout << ch;
    }
    cout << endl;
}

void drawVerticalLine(int height, char ch)
{
    for (int i = 0; i < height; i++)
    {
        cout << ch << endl;
    }
}

void drawSquare(int size, char ch)
{
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
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

void drawRectangle(int height, int length, char ch)
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
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}