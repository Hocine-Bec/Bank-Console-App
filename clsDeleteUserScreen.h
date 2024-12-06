#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsPerson.h"
#include "clsBankClient.h"
#include "clsInputValidate.h"

class clsDeleteUserScreen : protected clsScreen
{
private:

    static void _PrintUser(clsUser User)
    {
        cout << "\nUser Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << User.FirstName;
        cout << "\nLastName    : " << User.LastName;
        cout << "\nFull Name   : " << User.FullName();
        cout << "\nEmail       : " << User.Email;
        cout << "\nPhone       : " << User.Phone;
        cout << "\nUser Name   : " << User.UserName;
        cout << "\nPassword    : " << User.Password;
        cout << "\nPermissions : " << User.Permissions;
        cout << "\n___________________\n";

    }

public:

    static void ShowDeleteUserScreen()
    {
        _DrawScreenHeader("\tDelete User Screen");

        string UserName = "";

        cout << "\nPlease Enter UserName: ";
        UserName = clsInputValidate::ReadString();

        if (!clsUser::IsUserExist(UserName))
        {
            cout << "\nUser with Username (" << UserName << ") is Not Found!";
            return;
        }

        clsUser User1 = clsUser::Find(UserName);

        /*if (UserName == "Admin")
        {
            cout << "\n\nYou cannot Delete This User.";
            return;
        }*/

        _PrintUser(User1);

        cout << "\n\nAre you sure you want delete this User? y/n ? ";
        if (clsInputValidate::ReadYesOrNo())
        {

            if (User1.Delete())
            {
                cout << "\n\nUser Deleted Successfully.";
                _PrintUser(User1);
            }
            else
            {
                cout << "\n\nYou cannot Delete This User.";
                return;
            }
        }
        else
        {
            cout << "\nDelete process was cancelled!\n";
        }

    }


};

