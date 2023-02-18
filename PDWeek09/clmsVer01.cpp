#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

bool mainloop = true;

int indexstudent = 5;
int arrSize = 10;
string bookId[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
string books[10] = {"Book1", "Book2", "Book3", "Book4", "Book5", "", "", "", "", ""};
string authors[10] = {"Author1", "Author2", "Author3", "Author4", "Author5", "", "", "", "", ""};
string status[10] = {"Available", "Unavailable", "Available", "Unavailable", "Available", "", "", "", "", ""};
string genres[10] = {"English", "Maths", "English", "Maths", "English", "", "", "", "", ""};
string issuedStudentNames[10] = {"Student1", "Student2", "Student3", "Student4", "Student5", "", "", "", "", ""};
string students[10] = {"Student1", "Student2", "Student3", "Student4", "Student5", "", "", "", "", ""};
string dueInDates[10] = {"", "22/02/2023", "", "25/02/2023", "", "", "", "", "", ""};

void pheader();
int loginScreen();
void adminMenu();
bool clogin(int c1);
void addBook();
void deleteBook();
void viewBooks();
void modifyBook();
void searchBook();
void viewIssuedBooks();
void IssueBook();
void returnBook();
void viewStudents();
void addStudent();
void stuMenu();
void searchBookStudent();
void searchByName();
void searchByAuthor();
void searchByGenre();
void checkStatus();
void checkstatus1();
void checkstatus2();

main()
{
    int c1;
    bool x;
    string username, pass, adminuser = "admin", adminpass = "0000", stuuser = "stu123", stupass = "1234";
   // pheader();

    while (true)
    {
        c1 = loginScreen();

        system("cls");
        pheader();

        if (c1 == 1)
        {

            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> pass;
            if (username == adminuser && pass == adminpass)
            {
                system("cls");
                pheader();
                adminMenu();
            }
            else
            {
                cout << "Incorrect username or password!!!" << endl;
                getch();
                system("cls");
                pheader();
            }
        }
        else if (c1 == 2)
        {

            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> pass;
            if (username == stuuser && pass == stupass)
            {
                system("cls");
                pheader();
                stuMenu();
            }
            else
            {
                cout << "Incorrect username or password!!!" << endl;
                getch();
                system("cls");
                pheader();
            }
        }
        else if (c1 == 3)
        {
            break;
        }
    }
}
void pheader()
{
    cout << "****************************************************************************************************************" << endl;
    cout << "*******************************  College Library Management System  ********************************************" << endl;
    cout << "****************************************************************************************************************" << endl
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
void adminMenu()
{
    int choice;
    while (true)
    {
        system("cls");
        pheader();
        cout << endl
             << "CLMS > Admin" << endl;
        cout << "1.  Add a new Book" << endl;
        cout << "2.  Delete a Book" << endl;
        cout << "3.  View Books" << endl;
        cout << "4.  Modify Book" << endl;
        cout << "5.  Search Book" << endl;
        cout << "6.  View Issued Books" << endl;
        cout << "7.  Issue Book" << endl;
        cout << "8.  Return Book" << endl;
        cout << "9.  View Students" << endl;
        cout << "10. Add New Student" << endl;
        cout << "11. Logout" << endl;
        cout << "12. Close Aplication" << endl;
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
            viewIssuedBooks();
        }
        else if (choice == 7)
        {
            system("cls");
            pheader();
            IssueBook();
        }
        else if (choice == 8)
        {
            system("cls");
            pheader();
            returnBook();
        }
        else if (choice == 9)
        {
            system("cls");
            pheader();
            viewStudents();
        }
        else if (choice == 10)
        {
            system("cls");
            pheader();
            addStudent();
        }
        else if (choice == 11)
        {
            system("cls");
            pheader();
            loginScreen();
            break;
        }
        else if (choice == 12)
        {
        }
    }
}
/*bool clogin(int c1)
{
    bool admin = false, stu = true;
    string username, pass, adminuser = "admin", adminpass = "0000", stuuser = "stu123", stupass = "1234";
    system("cls");
    pheader();
    while (true)
    {
        if (c1 == 1)
        {

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
            break;
        }
    }
}*/
void addBook()
{
    cout << "Enter Book Name: ";
    cin >> books[indexbook];
    cout << "Enter Author Name: ";
    cin >> authors[indexbook];
    cout << "Enter Book Genre: ";
    cin >> genres[indexbook];
    status[indexbook] = "Available";
    indexbook++;
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
    dueInDates[idx] = "";
    cout << "Book Deleted Successfully!!!" << endl;
    cout << "Press any key to continue: ";
    getch();
}
void viewBooks()
{
    cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t " << authors[i] << "\t\t" << status[i] << "\t\t";
        if (status[i] == "Unavailable")
        {
            cout << issuedStudentNames[i];
        }
        cout << "\t\t" << dueInDates[i] << endl;
    }
    cout << "Press any key to continue: ";
    getch();
}
void modifyBook()
{
    string name;
    int idx, choice;
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
    system("cls");
    pheader();
    cout << endl;
    cout << "1. Change Book Status: " << endl;
    cout << "2. Change Book's Due In Date: " << endl;
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        pheader();
        cout << "Enter Book Status: ";
        cin >> status[idx];
        cout << endl
             << "Book Status has been changed successfully!" << endl;
        cout << "Press any key to continue: ";
        getch();
    }
    else if (choice == 2)
    {
        system("cls");
        pheader();
        cout << "Enter Date: ";
        cin >> dueInDates[idx];
        cout << endl
             << "Book dueIn date has been changed successfully!" << endl;
        cout << "Press any key to continue: ";
        getch();
    }
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
            cout << endl
                 << "Book ID\t\tGenre\t\tBook Name\tAuthor\t\tStatus" << endl;
            cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t" << authors[i] << "\t\t" << status[i] << endl;
            break;
        }
        else
        {
            cout << "Book Not Found!!!" << endl;
            break;
        }
    }
    cout << "Press any key to continue: ";
    getch();
}
void viewIssuedBooks()
{
    cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (status[i] == "Unavailable")
        {
            cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t " << authors[i] << "\t\t" << status[i] << "\t\t" << issuedStudentNames[i] << "\t\t" << dueInDates[i] << endl;
        }
    }
    cout << "Press any key to continue: ";
    getch();
}
void IssueBook()
{
    int idx;
    string bname;
    cout << "Enter Book Name: ";
    cin >> bname;
    for (int i = 0; i < arrSize; i++)
    {
        if (books[i] == bname)
        {
            idx = i;
        }
    }
    cout << "Enter Student Name: ";
    cin >> issuedStudentNames[idx];
    cout << "Enter Due Date: ";
    cin >> dueInDates[idx];
    status[idx] = "Unavailable";
    cout << "Book Issued!!" << endl;
    cout << "Press any key to continue: ";
    getch();
}
void returnBook()
{
    int idx;
    string bname;
    cout << "Enter Book Name: ";
    cin >> bname;
    for (int i = 0; i < arrSize; i++)
    {
        if (books[i] == bname)
        {
            idx = i;
        }
    }
    issuedStudentNames[idx] = "";
    dueInDates[idx] = "";
    status[idx] = "Available";
    cout << "Book Returned Successfully!!" << endl;
    cout << "Press any key to continue: ";
    getch();
}
void viewStudents()
{
    cout << "List of Members of Library: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << students[i] << endl;
    }
    cout << "Press any key to continue: ";
    getch();
}
void addStudent()
{
    cout << "Enter Student Name: ";
    cin >> students[indexstudent];
    indexstudent++;
    cout << "Student Added Successfully!" << endl;
    cout << "Press any key to continue: ";
    getch();
}
void stuMenu()
{
    int choice;
    while (true)
    {
        system("cls");
        pheader();
        cout << endl
             << "CLMS > Student" << endl;
        cout << "1. Search Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Check Status of a Book" << endl;
        cout << "4. Logout" << endl;
        cout << "5. Close Application" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1)
        {
            system("cls");
            pheader();
            searchBookStudent();
        }
        else if (choice == 2)
        {
            system("cls");
            pheader();
            viewBooks();
        }
        else if (choice == 3)
        {
            system("cls");
            pheader();
            checkStatus();
        }
        else if (choice == 4)
        {
            system("cls");
            pheader();
            loginScreen();
            break;
        }
        else if (choice == 5)
        {
            break;
        }
    }
}
void searchBookStudent()
{
    int choice;
    cout << "1. Search Book by Name" << endl;
    cout << "2. Search Book by Author" << endl;
    cout << "3. Search Book by Genre" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        pheader();
        searchByName();
    }
    else if (choice == 2)
    {
        system("cls");
        pheader();
        searchByAuthor();
    }
    else if (choice == 3)
    {
        system("cls");
        pheader();
        searchByGenre();
    }
}
void searchByName()
{
    string bnmae;
    int idx = -1;
    cout << "Enter Book Name: ";
    cin >> bnmae;

    for (int i = 0; i < arrSize; i++)
    {
        if (bnmae == books[i])
        {
            idx = i;
        }
    }
    if (idx != -1)
    {
        cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
             << endl;
        cout << bookId[idx] << "\t\t" << genres[idx] << "\t\t" << books[idx] << "\t\t " << authors[idx] << "\t\t" << status[idx] << "\t\t";
        if (status[idx] == "Unavailable")
        {
            cout << issuedStudentNames[idx] << "\t\t" << dueInDates[idx] << endl;
        }
    }
    else
    {
        cout << "Book Not Found!!!" << endl;
    }

    cout << endl
         << "Press any key to continue: ";
    getch();
}
void searchByAuthor()
{
    string author;
    cout << "Enter Book Author: ";
    cin >> author;
    cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (author == authors[i])
        {

            cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t " << authors[i] << "\t\t" << status[i] << "\t\t";
            if (status[i] == "Unavailable")
            {
                cout << issuedStudentNames[i] << "\t\t" << dueInDates[i] << endl;
            }
            break;
        }
        else
        {

            break;
        }
    }
    cout << endl
         << "Press any key to continue: ";
    getch();
}
void searchByGenre()
{
    string genre;
    cout << "Enter Book Genre: ";
    cin >> genre;
    cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (genre == genres[i])
        {

            cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t " << authors[i] << "\t\t" << status[i] << "\t\t";
            if (status[i] == "Unavailable")
            {
                cout << issuedStudentNames[i] << "\t\t" << dueInDates[i] << endl;
            }
            break;
        }
        else
        {
            cout << "Book Not Found!!!" << endl;
            break;
        }
    }
    cout << endl
         << "Press any key to continue: ";
    getch();
}
void checkStatus()
{
    int choice;
    cout << "1. View Available Books" << endl;
    cout << "2. View Unavailable Books" << endl;
    cout << "Enter choice: " << endl;
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        pheader();
        checkstatus1();
    }
    else if (choice == 2)
    {
        system("cls");
        pheader();
        checkstatus2();
    }
}
void checkstatus1()
{
    cout << "Available Books: " << endl;
    cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (status[i] == "Available")
        {
            cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t " << authors[i] << "\t\t" << status[i] << "\t\t" << issuedStudentNames[i] << "\t\t" << dueInDates[i] << endl;
        }
    }
    cout << "Press any key to continue: ";
    getch();
}
void checkstatus2()
{
    cout << "Unavailable Books: " << endl;
    cout << "Book ID\t\tGenre\t\t Book Name\t Author\t\t\tStatus\t\t\tStudentName\t\tDueInDate" << endl
         << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (status[i] == "Unavailable")
        {
            cout << bookId[i] << "\t\t" << genres[i] << "\t\t" << books[i] << "\t\t " << authors[i] << "\t\t" << status[i] << "\t\t" << issuedStudentNames[i] << "\t\t" << dueInDates[i] << endl;
        }
    }
    cout << "Press any key to continue: ";
    getch();
}