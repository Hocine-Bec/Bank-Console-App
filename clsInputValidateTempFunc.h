//ProgrammingAdivces.com
//Mohammed Abu-Hadhoud

#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"

class clsInputValidateTempFunc
{

public:

	template <typename T> static bool IsNumberBetween(T Number, T From, T To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;

	}

	template <typename T> static bool IsNumberBetween(T Number, T From, T To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}

	template <typename T> static bool IsDateBetween(T Date, T From, T To)
	{
		//Date>=From && Date<=To
		if ((T::IsDate1AfterDate2(Date, From) || T::IsDate1EqualDate2(Date, From))
			&&
			(T::IsDate1BeforeDate2(Date, To) || T::IsDate1EqualDate2(Date, To))
			)
		{
			return true;
		}

		//Date>=To && Date<=From
		if ((T::IsDate1AfterDate2(Date, To) || T::IsDate1EqualDate2(Date, To))
			&&
			(T::IsDate1BeforeDate2(Date, From) || T::IsDate1EqualDate2(Date, From))
			)
		{
			return true;
		}

		return false;
	}

	template <typename T> static T ReadShortNumber(T ErrorMessage = "Invalid Number, Enter again\n")
	{
		T Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	template <typename T> static T ReadIntNumber(T ErrorMessage = "Invalid Number, Enter again\n")
	{
		T Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	template <typename T> static T ReadShortNumberBetween(T From, T To, T ErrorMessage = "Number is not within range, Enter again:\n")
	{
		T Number = ReadShortNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadShortNumber();
		}
		return Number;
	}

	template <typename T> static T ReadIntNumberBetween(T From, T To, T ErrorMessage = "Number is not within range, Enter again:\n")
	{
		T Number = ReadIntNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber();
		}
		return Number;
	}

	template <typename T> static T ReadFloatNumber(T ErrorMessage = "Invalid Number, Enter again\n")
	{
		float Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	template <typename T> static T ReadFloatNumberBetween(T From, T To, T ErrorMessage = "Number is not within range, Enter again:\n")
	{
		float Number = ReadFloatNumber();

		while (!IsNumberBetween(Number, From, To)) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}

	template <typename T> static T ReadDblNumber(T ErrorMessage = "Invalid Number, Enter again\n")
	{
		T Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	template <typename T> static T ReadDblNumberBetween(T From, T To, T ErrorMessage = "Number is not within range, Enter again:\n")
	{
		T Number = ReadDblNumber();

		while (!IsNumberBetween(Number, From, To)) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}

	template <typename T> static bool IsValideDate(T Date)
	{
		return	T::IsValidDate(Date);
	}

	template <typename T> static T ReadString()
	{
		T  S1 = "";
		// Usage of std::ws will extract allthe whitespace character
		getline(cin >> ws, S1);
		return S1;
	}

	template <typename T> static bool ReadYesOrNo(T ErrorMessage = "Invalid Answer! Please choose Y/N ")
	{
		char Answer = ' ';
		cin >> Answer;

		if ((toupper(Answer) != 'Y') && (toupper(Answer) != 'N'))
		{
			cout << ErrorMessage;
			cin >> Answer;
		}

		return (toupper(Answer) == 'Y') ? true : false;
	}

};
