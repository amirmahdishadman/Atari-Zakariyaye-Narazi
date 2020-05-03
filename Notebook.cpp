#include "Notebook.h"

void Notebook::print()
{
    int page;
    cout << "|*Lotfan Shomareye Safehe ra vared konid: *|" << endl;
    cin >> page;
    cout << "Page(" << page << ")" << endl;
    if (page <= notebook.size() && page != 0)
    {
        cout << notebook[page - 1] << endl;
    }
    else
    {
        cout << "\t-Safhei ba in shomare vojod nadarad!-" << endl;
    }
}

void Notebook::Read_Note()
{
    cout << "*[Reading Notes]*" << endl;
    if (notebook.size() > 0)
    {
        print();
    }
    else
    {
        cout << "|- Hanoz Safhei Baraye Khandan Vojod Nadarad :) -|" << endl;
    }   
}

void Notebook::Add_Note()
{
    cout << "*[Add Notes]*" << endl;
    cout << "Matn ra Benevisid va Enter ra Bezanid..." << endl;
    notebook.resize(notebook.size() + 1);
    string str;
    getline(cin, str);
    getline(cin, str);
    notebook[notebook.size() - 1] = str;
}

void Notebook::Edit_Note()
{
    cout << "*[Edit Notes]*" << endl;
    cout << "|*Lotfan Shomareye Safehe ra vared konid: *|" << endl;
    int page;
    cin >> page;
    if (page <= notebook.size() && page != 0)
    {
        cout << "Matn ra Benevisid va Enter ra Bezanid..." << endl;
        string str;
        getline(cin, str);
        getline(cin, str);
        notebook[page - 1] = str;
    }
    else
    {
        cout << "\t-Safhei ba in shomare vojod nadarad!-" << endl;
    }
    
}

void Notebook::Initialize_NoteBook()
{
    
    int choice;
    bool loop = true;
    while (loop == true)
    {
        cout << "\n\t\t*------*[NoteBook]*------*" << endl;
        cout << "Reading(1) | Addition(2) | Edition(3) | Back To Last Menu(0)" << endl;
        cout << "Entekhabe Shoma: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            Read_Note();
            break;
        case 2:
            Add_Note();
            break;
        case 3:
            Edit_Note();
            break;
        case 0:
            loop = false;
            break;
        default:
            cout << "Vorodi Eshtebah!\nDobare Talash Konid!:\n" << endl;
        }
    }
}