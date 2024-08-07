#include <bits/stdc++.h>
using namespace std;
class player
{
private:
    int age;
    char name[40], team[40];

public:
    player()
    {
        cout << " enter player's name: " << name;
        cin.getline(name, 40);
        cout << " enter player's team: " << team;
        cin.getline(team, 40);
        cout << " player's age: " << age;
        cin >> age;
    }
    void input()
    {
        cout << " enter the name: " << endl;
        cin >> name;
        cout << " enter the team's name: " << endl;
        cin >> team;
        cout << " enter the age: " << endl;
        cin >> age;
    }
    void display()
    {
        cout << " player's name is: " << name << endl;
        cout << " player's team is: " << team << endl;
        cout << " player's age is: " << age << endl;
        system("pause");
    }
    void change(char n[40], char t[40], int a)
    {
        strcpy(name, n);
        strcpy(team, t);
        age = a;
    }
};
int main()
{
    int choice;
    player P;
    do
    {
        system("cls");
        cout << " ------------- menu ------------" << endl;
        cout << " input player data " << endl;
        cout << " display player data " << endl;
        cout << " change player data  " << endl;
        cout << " exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            P.input();
            break;
        case 2:
            P.display();
            break;
        case 3:
            P.change("rohit sharma", "india", 40);
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << " invalid data " << endl;
        }
    } while (1);

    P.display();
    return 0;
}