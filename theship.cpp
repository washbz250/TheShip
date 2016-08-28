// THE SHIP
// A GAME BY ZACH WASHBURN

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Intro text
    cout << setfill('-') << setw(50) << '-';
    cout << "\nTHE SHIP\n" << endl;
    cout << "A text adventure..." << endl;
    cout << setfill('-') << setw(50) << '-';




    // Beginning
    
    
    cout << "\nCHAPTER 1\n" << endl;
    
    
    cout << "\n\nYou wake up in what appears to be a small metal box\n" <<
        "with no exits. You feel like you've been asleep \n" << 
        "for a very long time. There is light leaking into the\n" << 
        "box from the outside. What do you do?" << endl;
    int box;
    cout << "Do you? \n 1) Bang on the box \n ..OR.. \n 2) Wait " << endl;
    cin >> box;

    if (box == 1)
    {
        cout << "You bang on the box. There is no response. " << endl;
    }
    else if (box == 2)
    { 
        cout << "You wait for an hour...Nothing happens. " << endl;
    }
    else
    {
        cout << "Galactic Basic, do you speak it? Type a number " << endl;
    }
    

    return 0;
}


