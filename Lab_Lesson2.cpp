// Lab_Lesson2.cpp
// name: Igor

#include <iostream>

using namespace std;

const int MAX_SHAPES = 10;

void drawHorizontalLine(int, char);
void drawVerticalLine(int, char);
void drawSquare(int, char, int);
void drawRectangle(int, int, char, int);
void drawShapes();

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

            while (length <= 0)
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

            while (height <= 0)
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

            while (size <= 0)
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

            while (length <= 0)
            {
                cout << "Invalid input! Enter a valid value: ";
                cin >> length;
            }

            cout << "Enter a heigth of the rectangle: ";
            cin >> height;

            while (height <= 0)
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

void drawSquare(int size, char ch, int isFilled)
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

void drawRectangle(int height, int length, char ch, int isFilled)
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

void drawShapes()
{
    srand(time(0));

    int fun, length, height, isFilled;
    char ch;
    
    cout << endl;

    for (int i = 0; i < MAX_SHAPES; i++)
    {
        fun = rand() % 4 + 1;
        length = rand() % 20 + 1;
        height = rand() % 20 + 1;
        ch = rand() % 93 + 33;
        isFilled = rand() % 2;

        switch (fun)
        {
        case 1:
            drawHorizontalLine(length, ch);
            cout << endl;

            break;
        case 2:
            drawVerticalLine(length, ch);
            cout << endl;

            break;
        case 3:
            drawSquare(length, ch, isFilled);
            cout << endl;

            break;
        case 4:
            drawRectangle(height, length, ch, isFilled);
            cout << endl;

            break;
        default:
            cout << "Invalid value for the choice!\n\n";
            break;
        }
    }
}