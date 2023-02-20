// Lab_Lesson2.cpp
// name: Igor

#include <iostream>

using namespace std;

void drawHorizontalLine(int, char);

int main()
{
    int choice, length;
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

        cout << "Enter a character for the line: ";
        cin >> ch;

        drawHorizontalLine(length, ch);

        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
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