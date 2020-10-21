#include <iostream>
#include <studio.h>

using namespace std;

void VisualizationMerge()
{
    cout << "        *○*     *○*       " << endl;
    cout << "     *○○○○○○*○*○○○○○○*    " << endl;
    cout << "   *○○○○○○○*○○○*○○○○○○○*  " << endl;
    cout << "  *○○○○○○○*○○○○○*○○○○○○○* " << endl;
    cout << "  *○○○○○○○*○○○○○*○○○○○○○* " << endl;
    cout << "   *○○○○○○○*○○○*○○○○○○○*  " << endl;
    cout << "     *○○○○○○*○*○○○○○○○*   " << endl;
    cout << "        *○*     *○*       " << endl;
}

void VisualizationSection()
{
    cout << "        * *     * *       " << endl;
    cout << "     *      *○*      *    " << endl;
    cout << "   *       *○○○*       *  " << endl;
    cout << "  *       *○○○○○*       * " << endl;
    cout << "  *       *○○○○○*       * " << endl;
    cout << "   *       *○○○*       *  " << endl;
    cout << "     *      *○*      *    " << endl;
    cout << "        * *     * *       " << endl;
}

void DifferenceA()
{
    cout << "        *○*     * *       " << endl;
    cout << "     *○○○○○○* *      *    " << endl;
    cout << "   *○○○○○○○*   *       *  " << endl;
    cout << "  *○○○○○○○*     *       * " << endl;
    cout << "  *○○○○○○○*     *       * " << endl;
    cout << "   *○○○○○○○*   *       *  " << endl;
    cout << "     *○○○○○○* *      *    " << endl;
    cout << "        *○*     * *       " << endl;
}

void DifferenceB()
{
    cout << "        * *     *○*       " << endl;
    cout << "     *      * *○○○○○○*    " << endl;
    cout << "   *       *   *○○○○○○○*  " << endl;
    cout << "  *       *     *○○○○○○○* " << endl;
    cout << "  *       *     *○○○○○○○* " << endl;
    cout << "   *       *   *○○○○○○○*  " << endl;
    cout << "     *      * *○○○○○○*    " << endl;
    cout << "        * *     *○*       " << endl;
}

void SymetricalDifference()
{
    cout << "        *○*     *○*       " << endl;
    cout << "     *○○○○○○* *○○○○○○*    " << endl;
    cout << "   *○○○○○○○*   *○○○○○○○*  " << endl;
    cout << "  *○○○○○○○*     *○○○○○○○* " << endl;
    cout << "  *○○○○○○○*     *○○○○○○○* " << endl;
    cout << "   *○○○○○○○*   *○○○○○○○*  " << endl;
    cout << "     *○○○○○○* *○○○○○○*    " << endl;
    cout << "        *○*     *○*       " << endl;
}

void Subset()
{
    cout << "        * *            " << endl;
    cout << "     *       *         " << endl;
    cout << "   *           *       " << endl;
    cout << "  *       **    *      " << endl;
    cout << "  *      *  *   *      " << endl;
    cout << "   *      **   *       " << endl;
    cout << "     *       *        " << endl;
    cout << "        * *            " << endl;
}

void Menu()
{

	int choice;


    cout << "+-------------------------------------------------------------+" << endl;
    cout << "|                                                             |" << endl;
    cout << "|                            Sets                             |" << endl; 
    cout << "|                  Please, choose an action                   |" << endl;
    cout << "|                                                             |" << endl;
    cout << "|                       1. Merge (A∪B)                       |" << endl;
    cout << "|                       2. Section (A∩B)                      |" << endl;
    cout << "|                       3. Difference (A\B)                   |" << endl;
    cout << "|                       4. Difference (B\A)                   |" << endl;
    cout << "|                       5. Symetrical difference (A△B)       |" << endl;
    cout << "|                       6. Subset (AcB)                       |" << endl;
    cout << "|                       7. Subset (BcA)                       |" << endl;
    cout << "|                       9. Exit                               |" << endl;
    cout << "|                                                             |" << endl;
    cout << "+-------------------------------------------------------------+" << endl;
    cout << endl;

    cout << "Your choice is:";
	cin >> choice;

    switch (choice) {
    case 1:
        outputMerge();
        VisualizationMerge();
        break;

    case 2:
        outputSection();
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
        Subset()
        break;

    case 7:
        //
        Subset()
            break;

    case 9:
        break; 
    }
}