#include <stdio.h>

int cal(int m, int x,int y)
{
	switch (m)
	{
	case 1:
		return sum(x,y);
		break;
	case 2:
		return sub(x,y);
		break;
	case 3:
		return mul(x,y);
		break;
	case 4:
		return div(x,y);
		break;
	case 5:
		return squ(x);
		break;
	case 6:
		return evo(x);
		break;

	default:
		return 0;
		break;
	}
}

int sum(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x * 10 / y;
}

int squ(int x)
{
	return x * x;
}

int evo(int x)
{
	int k, j;
	for (int i = 0; i < x; i++)
	{
		k = i - 1;
		j = i + 1;
		if (j * j == x)
		{
			return j;
		}
		else if (k * k<x && j * j>x)
		{
			return i;
		}
	}
}

main()
{
	int m, x, y, z;
	printf("����������ѡ��ģʽ��\n1.�ӷ�\n2.����\n3.�˷�\n4.����\n5.ƽ��\n6.����\n");
	scanf_s("%d", & m);
	if (m < 4)
	{
		printf("���������������֣�\n");
		scanf_s("%d %d", &x, &y);
	}
	else if (m == 4)
	{
		printf("���������������֣�\n");
		scanf_s("%d %d", &x, &y);
		z = cal(m, x, y);
		int n = z / 10;
		int m = z % 10;
		printf("���Ϊ��%d.%d\n", n, m);
		return 0;
	}
	else
	{
		printf("�����������֣�\n");
		scanf_s("%d", &x);
		y = 0;
	}
	z=cal(m,x,y);
	printf("���Ϊ��%d",z);
	return 0;
}