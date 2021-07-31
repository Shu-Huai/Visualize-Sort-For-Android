﻿#include "Sort.h"
#include "SleepThread.h"
Sort::Sort(QObject* parent) : QObject(parent), time_(0)
{
}
void Sort::BubbleSort(ElemList<int>& list)
{
	for (int i = 0; i < list.GetLength(); i++)
	{
		for (int j = 0; j < list.GetLength() - i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				emit RepaintSignal(j, j + 1, true);
				SleepThread::Sleep(time_);
				list.Swap(j, j + 1);
			}
			emit RepaintSignal(j, j + 1);
			SleepThread::Sleep(time_);
		}
	}
}
void Sort::OptimizedBubbleSort(ElemList<int>& list)
{
	for (int i = 0; i < list.GetLength(); i++)
	{
		bool isSwaped = false;
		for (int j = 0; j < list.GetLength() - i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				emit RepaintSignal(j, j + 1, true);
				SleepThread::Sleep(time_);
				list.Swap(j, j + 1);
				isSwaped = true;
			}
			emit RepaintSignal(j, j + 1);
			SleepThread::Sleep(time_);
		}
		if (!isSwaped)
		{
			break;
		}
	}
}
void Sort::CockTailSort(ElemList<int>& list)
{
	for (int i = 0; i < list.GetLength(); i++)
	{
		bool isSwaped = false;
		for (int j = i; j < list.GetLength() - i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				emit RepaintSignal(j, j + 1, true);
				SleepThread::Sleep(time_);
				list.Swap(j, j + 1);
				isSwaped = true;
			}
			emit RepaintSignal(j, j + 1);
			SleepThread::Sleep(time_);
		}
		if (!isSwaped)
		{
			break;
		}
		isSwaped = false;
		for (int j = list.GetLength() - i - 2; j > i; j--)
		{
			if (list[j] < list[j - 1])
			{
				emit RepaintSignal(j, j - 1, true);
				SleepThread::Sleep(time_);
				list.Swap(j, j - 1);
				isSwaped = true;
			}
			emit RepaintSignal(j, j - 1);
			SleepThread::Sleep(time_);
		}
		if (!isSwaped)
		{
			break;
		}
	}
}
void Sort::QuickSort(ElemList<int>& list)
{
	QuickSort(list, 0, list.GetLength() - 1);
}
void Sort::StraightInsertSort(ElemList<int>& list)
{
	for (int i = 1; i < list.GetLength(); i++)
	{
		int j = i - 1;
		int temp = list[i];
		emit RepaintSignal(true, i, temp, true);
		SleepThread::Sleep(time_);
		for (j = i - 1; j >= 0; j--)
		{
			if (list[j] <= temp)
			{
				emit RepaintSignal(false, j, temp);
				SleepThread::Sleep(time_);
				break;
			}
			emit RepaintSignal(false, j, temp, true);
			SleepThread::Sleep(time_);
			list[j + 1] = list[j];
		}
		list[j + 1] = temp;
		emit RepaintSignal(j + 1, -1);
		SleepThread::Sleep(time_);
	}
}
void Sort::BinaryInsertSort(ElemList<int>& list)
{
	for (int i = 1; i < list.GetLength(); i++)
	{
		int low = 0;
		int high = i - 1;
		int middle = 0;
		int key = list[i];
		while (low <= high)
		{
			middle = (low + high) / 2;
			if (list[middle] > key)
			{
				high = middle - 1;
			}
			else if (list[middle] < key)
			{
				low = middle + 1;
			}
			if (low <= high)
			{
				emit RepaintSignal(middle, i, true);
			}
			else
			{
				emit RepaintSignal(middle, i, false);
			}
			SleepThread::Sleep(time_);
		}
		for (int j = i - 1; j >= low; j--)
		{
			list[j + 1] = list[j];
		}
		list[low] = key;
		emit RepaintSignal(low, -1);
		SleepThread::Sleep(time_);
	}
}
void Sort::ShellSort(ElemList<int>& list)
{
	int distance = list.GetLength() / 2;
	while (distance > 0)
	{
		for (int i = distance; i < list.GetLength(); i++)
		{
			int j = i - distance;
			int temp = list[i];
			emit RepaintSignal(true, i, temp, true);
			SleepThread::Sleep(time_);
			for (j = i - distance; j >= 0; j -= distance)
			{
				if (list[j] <= temp)
				{
					emit RepaintSignal(false, j, temp);
					SleepThread::Sleep(time_);
					break;
				}
				emit RepaintSignal(false, j, temp, true);
				SleepThread::Sleep(time_);
				list[j + distance] = list[j];
			}
			list[j + distance] = temp;
			emit RepaintSignal(j + distance, -1);
			SleepThread::Sleep(time_);
		}
		distance /= 2;
	}
}
void Sort::CountSort(ElemList<int>& list)
{
	int* indexes = new int[list.GetLength()]{ 0 };
	for (int i = 0; i < list.GetLength(); i++)
	{
		for (int j = 0; j < list.GetLength(); j++)
		{
			if (i == j)
			{
				continue;
			}
			emit RepaintSignal(i, j);
			SleepThread::Sleep(time_);
			if (list[j] < list[i])
			{
				indexes[i]++;
			}
		}
	}
	ElemList<int> result(list.GetLength());
	for (int i = 0; i < list.GetLength(); i++)
	{
		result.AppendElem(i);
	}
	for (int i = 0; i < list.GetLength(); i++)
	{
		result[indexes[i]] = list[i];
	}
	list = result;
	delete[] indexes;
}
void Sort::MonkeySort(ElemList<int>& list)
{
	bool isSorted = list.IsSorted();
	while (!isSorted)
	{
		list.RandomOrder();
		emit RepaintSignal(-1, -1);
		SleepThread::Sleep(time_);
		isSorted = list.IsSorted();
	}
}
void Sort::RadixSort(ElemList<int>& list)
{
	for (int i = 1; list.GetLength() / i > 0; i *= 10)
	{
		int* counts = new int[10]{ 0 };
		for (int j = 0; j < list.GetLength(); j++)
		{
			counts[(list[j] / i) % 10]++;
			emit RepaintSignal(j, -1);
			SleepThread::Sleep(time_);
		}
		int* indexes = new int[10]{ 0 };
		for (int j = 1; j < 10; j++)
		{
			indexes[j] = indexes[j - 1] + counts[j - 1];
		}
		delete[]counts;
		int* result = new int[list.GetLength()]{ 0 };
		for (int j = 0; j < list.GetLength(); j++)
		{
			result[indexes[(list[j] / i) % 10]] = list[j];
			indexes[(list[j] / i) % 10]++;
			emit RepaintSignal(j, -1);
			SleepThread::Sleep(time_);
		}
		delete[]indexes;
		for (int j = 0; j < list.GetLength(); j++)
		{
			list[j] = result[j];
		}
		delete[]result;
	}
}
void Sort::MergeSort(ElemList<int>& list)
{
	int intervalLength = 1;
	while (intervalLength < list.GetLength())
	{
		int index = 0;
		while (index + 2 * intervalLength <= list.GetLength())
		{
			Merge(list, index, index + intervalLength - 1, index + 2 * intervalLength - 1);
			index += 2 * intervalLength;
		}
		if (index + intervalLength < list.GetLength())
		{
			Merge(list, index, index + intervalLength - 1, list.GetLength() - 1);
		}
		intervalLength *= 2;
	}
}
void Sort::SetTime(int time)
{
	if (time < 0)
	{
		throw std::string("范围错误");
	}
	time_ = time;
}
void Sort::QuickSort(ElemList<int>& list, int low, int high)
{
	if (low < high)
	{
		int referenceValue = list[low];
		int i = low;
		int j = high;
		emit RepaintSignal(true, i, referenceValue, true);
		SleepThread::Sleep(time_);
		while (i < j)
		{
			while (i < j && list[j] >= referenceValue)
			{
				emit RepaintSignal(false, j, referenceValue);
				SleepThread::Sleep(time_);
				j--;
			}
			if (i < j)
			{
				emit RepaintSignal(false, j, referenceValue, true);
				SleepThread::Sleep(time_);
				list[i] = list[j];
				emit RepaintSignal(true, j, referenceValue);
				SleepThread::Sleep(time_);
				i++;
			}
			while (i < j && list[i] <= referenceValue)
			{
				emit RepaintSignal(false, i, referenceValue);
				SleepThread::Sleep(time_);
				i++;
			}
			if (i < j)
			{
				emit RepaintSignal(false, i, referenceValue, true);
				SleepThread::Sleep(time_);
				list[j] = list[i];
				emit RepaintSignal(true, i, referenceValue);
				SleepThread::Sleep(time_);
				j--;
			}
		}
		list[i] = referenceValue;
		QuickSort(list, low, i - 1);
		QuickSort(list, i + 1, high);
	}
}
void Sort::Merge(ElemList<int>& list, int low, int middle, int high)
{
	ElemList<int> result(high + 1);
	for (int i = 0; i < high + 1; i++)
	{
		result.AppendElem(0);
	}
	int i = low;
	int j = middle + 1;
	int k = low;
	while (i <= middle && j <= high)
	{
		emit RepaintSignal(i, j);
		SleepThread::Sleep(time_);
		if (list[i] <= list[j])
		{
			result[k] = list[i];
			i++;
		}
		else
		{
			result[k] = list[j];
			j++;
		}
		k++;
	}
	while (i <= middle)
	{
		emit RepaintSignal(i, -1);
		SleepThread::Sleep(time_);
		result[k] = list[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		emit RepaintSignal(-1, j);
		SleepThread::Sleep(time_);
		result[k] = list[j];
		k++;
		j++;
	}
	for (k = low; k <= high; k++)
	{
		list[k] = result[k];
	}
}
