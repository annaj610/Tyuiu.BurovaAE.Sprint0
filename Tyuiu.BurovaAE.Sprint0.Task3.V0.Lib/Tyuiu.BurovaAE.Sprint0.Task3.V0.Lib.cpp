// Tyuiu.BurovaAE.Sprint0.Task3.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours1.cpp/Tyuiu.Cours1.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service1:public ISprint0Task3V0
{
	virtual int Add(int a, int b, int c) override
	{
		return a + b + c;
	};
};
