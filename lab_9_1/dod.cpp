// ���� ��������� �������
#include "dod.h"
#include "var.h" // ��������� �������� ���������� ������
using namespace nsVar;
void nsDod::dod() {
	R = -((2 * n - 1) * (x * x) / (2 * n + 1));
	a *= R; // ������� ����������� ��
} // ���������� ������������