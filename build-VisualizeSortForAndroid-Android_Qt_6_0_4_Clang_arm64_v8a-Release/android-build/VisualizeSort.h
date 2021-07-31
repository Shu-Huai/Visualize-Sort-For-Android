#pragma once
#include <QtWidgets/QMainWindow>
#include "Sort.h"
#include "ui_VisualizeSort.h"
class VisualizeSort : public QMainWindow
{
    Q_OBJECT
public:
    VisualizeSort(int maxLength, QWidget* parent = nullptr);
    ~VisualizeSort();
    void paintEvent(QPaintEvent*);
public slots:
    void RandomInitialize();
    void StartSort();
    void RepaintSlot(int firstIndex, int secondIndex, bool needSwap);
    void RepaintSlot(bool needGray, int index, int referenceValue, bool needSwap);
protected:
    Ui::VisualizeSort* ui_;
    ElemList<int> list_;
    Sort sort_;
    int maxLength_;
    bool isStarted_;
    int firstIndex_;
    int secondIndex_;
    int referenceValue_;
    bool needGray_;
    bool needSwap_;
};
