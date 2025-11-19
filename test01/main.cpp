#include <iostream>
using namespace std;

void coutArr(int* arr, int length) 
{
	/*
		函数名：coutArr
		函数功能：输出传入的整型数组
		函数参数：	int* arr - 传入的整型数组
		返回值：void
	*/
	for (int i = 0; i < length; i++) 
	{
		cout << arr[i] << "\t";
	}

}

void arrReverse(int *arr, int length)
{
	/*
	函数名：arrReverse
	函数功能：将传入的整型数组进行反转
	函数参数：	int* arr - 传入的整型数组
				int length - 传入的整型数组的长度
	返回值：void
	*/
	
	int temp = 0;
	cout << "数组长度为：" << length << endl;
	for (int i = 0; i < length / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[length - 1 - i];
		arr[length - 1 - i] = temp;
	}

}

void arrAscend(int* arr, int length)
{
	/*
	函数名：arrAscend
	函数功能：将传入的整型数组进行升序排序
	函数参数：	int* arr - 传入的整型数组
				int length - 传入的整型数组的长度
	返回值：void
	*/
	
	for (int i = 0; i < length - 1; i++)
	{
		
		for (int j = 0; j < length - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		cout << "第" << i + 1 << "轮排序的结果为：" ;
		coutArr(arr, length);
		cout << endl;
	}

}



int main() 
{
	int arr[2][3] = {300,200,400,600,100,250};
	
	cout << arr[0] << endl;
	cout << arr << endl;
	
	cout << "client modify main";
	
	
	return 0;
}


