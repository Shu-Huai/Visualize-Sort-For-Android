#include "SleepThread.h"
void SleepThread::Sleep(int time)
{
	QThread::msleep(time);
}
