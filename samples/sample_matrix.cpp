// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
  int i, j, h;
  cout << "������� ������ ����������������� ������� ��� ��������:"<<endl;
  cin >> h;
  TMatrix<int> a(h), b(h), c(h);
  cout << "������� �������� ������� � ���������:" << endl;
  cin >> a;
  cout << "������� �������� ������� � ���������:" << endl;
  cin >> b;
  cout << "�������� �������" << endl;
  cout << "Matrix a:" << a << endl;
  cout << "Matrix b:" << b << endl;
  c = a + b;
  cout << "Matrix c = a + b" << endl << "Matrix c ="<<endl <<c << endl;
  c = a - b;
  cout << "Matrix c = a - b" << endl << "Matrix c =" << endl << c << endl;
}
//---------------------------------------------------------------------------
