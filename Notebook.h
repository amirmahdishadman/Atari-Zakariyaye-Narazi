#ifndef NoteBook_H
#define NoteBook_H
#include <iostream>
#include <vector>

using namespace std;

//OP_overloading for printing Notebook informarions(Reading Notebook)
template <typename T>
inline ostream &operator<<(ostream &Output, vector <T> &);

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
};
template <typename T>
ostream &operator<<(ostream &Output, vector <T> &n1)
{
    int page;
    cout << "Please Enter Your Page Number: " << endl;
    cin >> page;
    Output << "Page(" << page << ")" << endl;
    Output << n1[page - 1] << endl;
    return Output;
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
    cout << "Read(1) | Addition(2) | Edition(3) | Back To Menu(0)" << endl;
    int choice;
    cin >> choice;
    bool loop = true;
    while (loop == true)
    {
        switch (choice)
        {
        case 1:
            cout << "You choosed to read your notes..." << endl;
            cout << notebook << endl;
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
            cout << "Wrong Number!\nTry Again:" << endl;
        }
    }
}
#endif