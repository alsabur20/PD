#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int index = 5;
int arrSize = 10;
string bookId[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
string books[10] = {"Book1", "Book2", "Book3", "Book4", "Book5", "", "", "", "", ""};
string authors[10] = {"Author1", "Author2", "Author3", "Author4", "Author5", "", "", "", "", ""};
string status[10] = {"Available", "Unavailable", "Available", "Unavailable", "Available", "", "", "", "", ""};
string genres[10] = {"English", "Maths", "English", "Maths", "English", "", "", "", "", ""};
string studentNames[10] = {"Student1", "Student2", "Student3", "Student4", "Student5", "", "", "", "", ""};

void pheader();
int loginScreen();
void adminMenu();
void stuMenu();
bool clogin(int c1);
void addBook();
void deleteBook();
void viewBooks();
void modifyBook();
void searchBook();

main()
{

    int c1;
    bool x;
    pheader();
    c1 = loginScreen();
    x = clogin(c1);
    if (x == true)
    {
        system("cls");
        pheader();
        adminMenu();
    }
    else if (x == false)
    {
        system("cls");
        pheader();
        stuMenu();
    }
}

void pheader()
{
    cout << "****************************************************************************" << endl;
    cout << "********************************  CLMS  ************************************" << endl;
    cout << "****************************************************************************" << endl
         << endl
         << endl;
}

int loginScreen()
{
    int choice;
    cout << endl;
    cout << "Welocme to College Library Management System" << endl;
    cout << "Select Login option: " << endl;
    cout << "1. Admin" << endl;
    cout << "2. Student" << endl;
    cout << "3. Close Application" << endl;
    cout << endl;
    cout << "Enter Choice: ";
    cin >> choice;
    return choice;
}
bool clogin(int c1)
{
    bool admin = false, stu = true;
    string username, pass, adminuser = "admin", adminpass = "0000", stuuser = "stu123", stupass = "1234";
    system("cls");
    pheader();
    if (c1 == 1)
    {
        while (true)
        {
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> pass;
            if (username == adminuser && pass == adminpass)
            {
                admin = true;
                return admin;
                break;
            }
            else
            {
                cout << "Incorrect username or password!!!" << endl;
                getch();
                system("cls");
                pheader();
            }
        }
    }
    else if (c1 == 2)
    {
        while (true)
        {
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> pass;
            if (username == stuuser && pass == stupass)
            {
                stu = false;
                return stu;
                break;
            }
            else
            {
                cout << "Incorrect username or password!!!" << endl;
                getch();
                system("cls");
                pheader();
            }
        }
    }
    else if (c1 == 3)
    {
        system("exit");
    }
}

void adminMenu()
{
    int choice;
    while (true)
    {
        system("cls");
        cout << endl
             << "CLMS > Admin" << endl;
        cout << "1. Add a new Book" << endl;
        cout << "2. Delete a Book" << endl;
        cout << "3. View Books" << endl;
        cout << "4. Modify Book" << endl;
        cout << "5. Search Book" << endl;
        cout << "6. Logout" << endl;
        cout << "7. Close Aplication" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1)
        {
            system("cls");
            pheader();
            addBook();
        }
        else if (choice == 2)
        {
            system("cls");
            pheader();
            deleteBook();
        }
        else if (choice == 3)
        {
            system("cls");
            pheader();
            viewBooks();
        }
        else if (choice == 4)
        {
            system("cls");
            pheader();
            modifyBook();
        }
        else if (choice == 5)
        {
            system("cls");
            pheader();
            searchBook();
        }
        else if (choice == 6)
        {
            system("cls");
            pheader();
            loginScreen();
            break;
        }
        else if (choice == 7)
        {
            system("exit");
        }
    }
}
void addBook()
{
    cout << "Enter Book Name: ";
    cin >> books[index];
    cout << "Enter Author Name: ";
    cin >> authors[index];
    cout << "Enter Book Genre: ";
    cin >> genres[index];
    status[index] = "Available";
    index++;
    cout << "Book has been added!" << endl;
    cout << "Press any key to continue: ";
    getch();
}
void deleteBook()
{
    int idx;
    string name1;
    cout << "Enter Book Name: ";
    cin >> name1;
    for (int i = 0; i < arrSize; i++)
    {
        if (name1 == books[i])
        {
            idx = i;
            break;
        }
    }
    books[idx] = "";
    authors[idx] = "";
    status[idx] = "";
    bookId[idx] = "";
    genres[idx] = "";
    cout << "Book Deleted Successfully!!!" << endl;
    cout << "Press any key to continue: ";
    getch();
}
void viewBooks()
{
    cout << "Book ID\tGenre\t\t Book Name\t Author\t\tStatus" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << bookId[i] << "\t" << genres[i] << "\t\t " << books[i] << "\t\t " << authors[i] << "\t " << status[i] << endl;
    }
    cout << "Press any key to continue: ";
    getch();
}
void modifyBook()
{
    string name;
    int idx;
    cout << "Enter Book Name: ";
    cin >> name;
    for (int i = 0; i < arrSize; i++)
    {
        if (name == books[i])
        {
            idx = i;
            break;
        }
    }
    cout << "Enter Book Status: ";
    cin >> status[idx];
    cout << "Press any key to continue: ";
    getch();
}
void searchBook()
{
    string name;
    cout << "Enter Book Name: ";
    cin >> name;
    cout << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (name == books[i])
        {
            cout << "Book Found!!!" << endl;
            // cout<<endl<<"Book ID\tGenre\tBook Name\t\tAuthor\t\tStatus"<<endl;
            cout << bookId[i] << "\t" << genres[i] << "\t" << books[i] << "\t\t" << authors[i] << "\t\t" << status[i] << endl;
        }
        else
        {
            cout << "Book Not Found!!!" << endl;
        }
    }
    cout << "Press any key to continue: ";
    getch();
}
void stuMenu()
{
    system("cls");
    cout << endl
         << "CLMS > Student" << endl;
    cout << "1. Search Book" << endl;
    cout << "2. View Books" << endl;
    cout << "3. Check Status of a Book" << endl;
    cout << "4. Logout" << endl;
    cout << "5. Close Application" << endl;
    cout << "Enter choice: ";
}
