#include <iostream>
#include "Data.h"

using namespace std;

void VisualizationMerge()
{
    cout << endl;
    cout << "        *○*     *○*       " << endl;
    cout << "     *○○○○○○*○*○○○○○○*    " << endl;
    cout << "   *○○○○○○○*○○○*○○○○○○○*  " << endl;
    cout << "  *○○○○○○○*○○○○○*○○○○○○○* " << endl;
    cout << "  *○○○○○○○*○○○○○*○○○○○○○* " << endl;
    cout << "   *○○○○○○○*○○○*○○○○○○○*  " << endl;
    cout << "     *○○○○○○*○*○○○○○○○*   " << endl;
    cout << "        *○*     *○*       " << endl;
    cout << endl;
}

void VisualizationSection()
{
    cout << endl;
    cout << "        * *     * *       " << endl;
    cout << "     *      *○*      *    " << endl;
    cout << "   *       *○○○*       *  " << endl;
    cout << "  *       *○○○○○*       * " << endl;
    cout << "  *       *○○○○○*       * " << endl;
    cout << "   *       *○○○*       *  " << endl;
    cout << "     *      *○*      *    " << endl;
    cout << "        * *     * *       " << endl;
    cout << endl;
}

void DifferenceA()
{
    cout << endl;
    cout << "        *○*     * *       " << endl;
    cout << "     *○○○○○○* *      *    " << endl;
    cout << "   *○○○○○○○*   *       *  " << endl;
    cout << "  *○○○○○○○*     *       * " << endl;
    cout << "  *○○○○○○○*     *       * " << endl;
    cout << "   *○○○○○○○*   *       *  " << endl;
    cout << "     *○○○○○○* *      *    " << endl;
    cout << "        *○*     * *       " << endl;
    cout << endl;
}

void DifferenceB()
{
    cout << endl;
    cout << "        * *     *○*       " << endl;
    cout << "     *      * *○○○○○○*    " << endl;
    cout << "   *       *   *○○○○○○○*  " << endl;
    cout << "  *       *     *○○○○○○○* " << endl;
    cout << "  *       *     *○○○○○○○* " << endl;
    cout << "   *       *   *○○○○○○○*  " << endl;
    cout << "     *      * *○○○○○○*    " << endl;
    cout << "        * *     *○*       " << endl;
    cout << endl;
}

void SymetricalDifference()
{
    cout << endl;
    cout << "        *○*     *○*       " << endl;
    cout << "     *○○○○○○* *○○○○○○*    " << endl;
    cout << "   *○○○○○○○*   *○○○○○○○*  " << endl;
    cout << "  *○○○○○○○*     *○○○○○○○* " << endl;
    cout << "  *○○○○○○○*     *○○○○○○○* " << endl;
    cout << "   *○○○○○○○*   *○○○○○○○*  " << endl;
    cout << "     *○○○○○○* *○○○○○○*    " << endl;
    cout << "        *○*     *○*       " << endl;
    cout << endl;
}

void Subset()
{
    cout << endl;
    cout << "        * *            " << endl;
    cout << "     *       *         " << endl;
    cout << "   *           *       " << endl;
    cout << "  *       **    *      " << endl;
    cout << "  *      *  *   *      " << endl;
    cout << "   *      **   *       " << endl;
    cout << "     *       *         " << endl;
    cout << "        * *            " << endl;
    cout << endl;
}

void Menu()
{
    int choice;

    do {

        cout << endl;

        cout << "        +-------------------------------------+" << endl;
        cout << "        |                                     |" << endl;
        cout << "        |             Sets Project            |" << endl;
        cout << "        |                                     |" << endl;
        cout << "        +-------------------------------------+" << endl;

        cout << "_________________________________________________________" << endl;
        cout << endl;

        cout << "+-------------------------------------------------------+" << endl;
        cout << "|               Please, choose an action                |" << endl;
        cout << "|                                                       |" << endl;
        cout << "|                    1. Merge                           |" << endl;
        cout << "|                    2. Section                         |" << endl;
        cout << "|                    3. The difference (A\B)             |" << endl;
        cout << "|                    4. The difference (B\A)             |" << endl;
        cout << "|                    5. Symetrical difference           |" << endl;
        cout << "|                    6. Subset                          |" << endl;
        cout << "|                    9. Exit                            |" << endl;
        cout << "+-------------------------------------------------------+" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        cout << "_________________________________________________________" << endl;

        switch (choice)
        {
        case 1:
            outputMerge();
            VisualizationMerge();
            break;

        case 2:
            outputSecton();
            VisualizationSection();
            break;

        case 3:
            //
            DifferenceA();
            break;

        case 4:
            //
            DifferenceB();
            break;

        case 5:
            //
            SymetricalDifference();
            break;

        case 6:
            //
            Subset();
            break;

        case 9:
            break;
        }

    } while (choice != 9);
}