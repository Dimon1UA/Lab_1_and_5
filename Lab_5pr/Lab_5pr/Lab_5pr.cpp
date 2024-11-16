#include "pch.h"
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace System;
/*Це перше рішення*/
/*
int main(array<String^>^ args)
{
	SetConsoleOutputCP(CP_UTF8);
	// Ê³ëüê³ñòü óñòàíîâîê
	const int n = 10; // Íàïðèêëàä, 10 óñòàíîâîê
	const int T = 1; // Îñê³ëüêè ÷àñòîòà ðîçðàõîâóºòüñÿ çà ð³ê, Ò = 1
	// Ê³ëüê³ñòü â³äìîâ çà êîæåí ð³ê (çà 15 ðîê³â)
	cli::array<int>^ failures = gcnew cli::array<int>(15) {
		3, 4, 2, 5, 3, 6, 4, 3,
			7, 3, 5, 2, 6, 4, 3
	};
	Console::WriteLine("Ð³ê\tÊ³ëüê³ñòü â³äìîâ\t×àñòîòà â³äìîâ");

	for (int i = 0; i < failures->Length; i++)
	{
		int m = failures[i]; // Ê³ëüê³ñòü â³äìîâ çà ð³ê
		double omega = static_cast<double>(m) / (n * T); // Îá÷èñëåííÿ ÷àñòîòè â³äìîâ
			Console::WriteLine("{0}\t{1}\t\t\t{2:F2}", i + 1, m, omega);
	}
	return 0;
}
*/
/*Це друге рішення*/

/*
int main(array<String^>^ args)
{

	SetConsoleOutputCP(CP_UTF8);
	// Ïî÷àòêîâ³ ÷èñëà x1, x2, ..., x8
	cli::array<double>^ x = gcnew cli::array<double>(8) {
		1.1, 2.2, 3.3, 4.4, 5.5,
			6.6, 7.7, 8.8
	};
	// Ñòâîðåííÿ ìàòðèö³ 4x8 äëÿ çáåð³ãàííÿ ðåçóëüòàòó
	cli::array<cli::array<double>^>^ matrix = gcnew
		cli::array<cli::array<double>^>(4);
	for (int i = 0; i < matrix->Length; i++)
	{
		matrix[i] = gcnew cli::array<double>(8);
	}
	// Çàïîâíåííÿ ìàòðèö³
	for (int j = 0; j < 8; j++)
	{
		matrix[0][j] = 1; // Ïåðøèé ðÿäîê: âñ³ åëåìåíòè äîð³âíþþòü 1
		matrix[1][j] = x[j]; // Äðóãèé ðÿäîê: çíà÷åííÿ x1, x2, ..., x8
		matrix[2][j] = std::pow(x[j], 2); // Òðåò³é ðÿäîê: x1^2, x2^2, ..., x8^2
		matrix[3][j] = std::pow(x[j], 3); // ×åòâåðòèé ðÿäîê: x1^3, x2^3, ..., x8^3
	}
	// Âèâåäåííÿ ìàòðèö³
	Console::WriteLine("Ìàòðèöÿ:");
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

