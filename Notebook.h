#ifndef NoteBook_H
#define NoteBook_H
#include <iostream>
#include <vector>

using namespace std;

class Notebook
{
private:
    vector <string> notebook;
public:
    //For Editing NoteBook
    void Edit_Note();

    //For Adding to NoteBook
    void Add_Note();

    //System of Notebook
    void Initialize_NoteBook();

    //OP_overloading for printing Notebook informarions
    ostream &operator<<(ostream &);
};
ostream &Notebook::operator<<(ostream &output)
{
    int page;
    cin >> page;
    cout << "Page(" << page << ")" << endl;
    output << notebook[page - 1] << endl;
    return output;
}

void Notebook::Add_Note()
{
    notebook.resize(notebook.size() + 1);
    cin >> notebook[notebook.size() - 1];
}

void Notebook::Edit_Note()
{
    cout << "Please Enter the page: " << endl;
    int page;
    cin >> page;
    cout << "Enter your text and press ENTER..." << endl;
    if (page <= notebook.size())
    {
        cin >> notebook[page - 1];
    }
    else
    {
        cout << "You have no note in this page" << endl;
    }
    
}

void Notebook::Initialize_NoteBook()
{
    cout << "Read(1) | Addition(2) | Edition(3) | Cancel(0)" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        Add_Note();
        break;
    case 2:
        Edit_Note();
        break;
    case 0:
        break;
    default:
        cout << "Wrong Number!\nTry Again:" << endl;
    }
}
#endif