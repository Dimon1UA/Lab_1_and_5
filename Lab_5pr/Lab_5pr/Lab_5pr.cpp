#include "pch.h"
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace System;
/*
int main(array<String^>^ args)
{
	SetConsoleOutputCP(CP_UTF8);
	// Кількість установок
	const int n = 10; // Наприклад, 10 установок
	const int T = 1; // Оскільки частота розраховується за рік, Т = 1
	// Кількість відмов за кожен рік (за 15 років)
	cli::array<int>^ failures = gcnew cli::array<int>(15) {
		3, 4, 2, 5, 3, 6, 4, 3,
			7, 3, 5, 2, 6, 4, 3
	};
	Console::WriteLine("Рік\tКількість відмов\tЧастота відмов");

	for (int i = 0; i < failures->Length; i++)
	{
		int m = failures[i]; // Кількість відмов за рік
		double omega = static_cast<double>(m) / (n * T); // Обчислення частоти відмов
			Console::WriteLine("{0}\t{1}\t\t\t{2:F2}", i + 1, m, omega);
	}
	return 0;
}
*/

/*
int main(array<String^>^ args)
{

	SetConsoleOutputCP(CP_UTF8);
	// Початкові числа x1, x2, ..., x8
	cli::array<double>^ x = gcnew cli::array<double>(8) {
		1.1, 2.2, 3.3, 4.4, 5.5,
			6.6, 7.7, 8.8
	};
	// Створення матриці 4x8 для зберігання результату
	cli::array<cli::array<double>^>^ matrix = gcnew
		cli::array<cli::array<double>^>(4);
	for (int i = 0; i < matrix->Length; i++)
	{
		matrix[i] = gcnew cli::array<double>(8);
	}
	// Заповнення матриці
	for (int j = 0; j < 8; j++)
	{
		matrix[0][j] = 1; // Перший рядок: всі елементи дорівнюють 1
		matrix[1][j] = x[j]; // Другий рядок: значення x1, x2, ..., x8
		matrix[2][j] = std::pow(x[j], 2); // Третій рядок: x1^2, x2^2, ..., x8^2
		matrix[3][j] = std::pow(x[j], 3); // Четвертий рядок: x1^3, x2^3, ..., x8^3
	}
	// Виведення матриці
	Console::WriteLine("Матриця:");
	for (int i = 0; i < matrix->Length; i++)
	{
		for (int j = 0; j < matrix[i]->Length; j++)
		{
			Console::Write("{0:F2}\t", matrix[i][j]);
		}
		Console::WriteLine();
	}
	return 0;
}
*/

