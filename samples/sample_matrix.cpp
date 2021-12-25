// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц" << endl;
  int i, j, h;
  cout << "Введите размер верхнегреугольной матрицы для проверки:"<<endl;
  cin >> h;
  TMatrix<int> a(h), b(h), c(h);
  cout << "Введите элементы матрицы А построчно:" << endl;
  cin >> a;
  cout << "Введите элементы матрицы Б построчно:" << endl;
  cin >> b;
  cout << "Введеные матрицы" << endl;
  cout << "Matrix a:" << a << endl;
  cout << "Matrix b:" << b << endl;
  c = a + b;
  cout << "Matrix c = a + b" << endl << "Matrix c ="<<endl <<c << endl;
  c = a - b;
  cout << "Matrix c = a - b" << endl << "Matrix c =" << endl << c << endl;
}
//---------------------------------------------------------------------------
