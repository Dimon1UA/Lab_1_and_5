#include "pch.h"
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace System;
/*
int main(array<String^>^ args)
{
	SetConsoleOutputCP(CP_UTF8);
	// ʳ������ ���������
	const int n = 10; // ���������, 10 ���������
	const int T = 1; // ������� ������� ������������� �� ��, � = 1
	// ʳ������ ����� �� ����� �� (�� 15 ����)
	cli::array<int>^ failures = gcnew cli::array<int>(15) {
		3, 4, 2, 5, 3, 6, 4, 3,
			7, 3, 5, 2, 6, 4, 3
	};
	Console::WriteLine("г�\tʳ������ �����\t������� �����");

	for (int i = 0; i < failures->Length; i++)
	{
		int m = failures[i]; // ʳ������ ����� �� ��
		double omega = static_cast<double>(m) / (n * T); // ���������� ������� �����
			Console::WriteLine("{0}\t{1}\t\t\t{2:F2}", i + 1, m, omega);
	}
	return 0;
}
*/

/*
int main(array<String^>^ args)
{

	SetConsoleOutputCP(CP_UTF8);
	// �������� ����� x1, x2, ..., x8
	cli::array<double>^ x = gcnew cli::array<double>(8) {
		1.1, 2.2, 3.3, 4.4, 5.5,
			6.6, 7.7, 8.8
	};
	// ��������� ������� 4x8 ��� ��������� ����������
	cli::array<cli::array<double>^>^ matrix = gcnew
		cli::array<cli::array<double>^>(4);
	for (int i = 0; i < matrix->Length; i++)
	{
		matrix[i] = gcnew cli::array<double>(8);
	}
	// ���������� �������
	for (int j = 0; j < 8; j++)
	{
		matrix[0][j] = 1; // ������ �����: �� �������� ��������� 1
		matrix[1][j] = x[j]; // ������ �����: �������� x1, x2, ..., x8
		matrix[2][j] = std::pow(x[j], 2); // ����� �����: x1^2, x2^2, ..., x8^2
		matrix[3][j] = std::pow(x[j], 3); // ��������� �����: x1^3, x2^3, ..., x8^3
	}
	// ��������� �������
	Console::WriteLine("�������:");
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

