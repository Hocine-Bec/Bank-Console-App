#pragma once
#include <iostream>
#include <stack>

using namespace std;

class clsMyString
{
private:

	string _Value;
	stack<string> _MyStack;
	stack<string> _MyStackTemp;

public:

	clsMyString()
	{
		_Value = "";
		_MyStack.push(_Value);
	}
	
	void SetValue(string value)
	{
		_MyStack.push(value);
		_Value = value;
	}
	string GetValue()
	{
		return _MyStack.top();
	}
	__declspec(property(get = GetValue, put = SetValue)) string Value;

	bool Undo()
	{
		if (_MyStack.empty())
			return false;
		_MyStackTemp.push(_MyStack.top());
		_MyStack.pop();
		return true;
	}

	bool Redo()
	{
		if (_MyStack.empty())
			return false;
		_MyStack.push(_MyStackTemp.top());
		_MyStackTemp.pop();
		return true;

	}









};

