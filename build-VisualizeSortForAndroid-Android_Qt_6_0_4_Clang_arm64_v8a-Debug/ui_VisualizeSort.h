/********************************************************************************
** Form generated from reading UI file 'VisualizeSort.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZESORT_H
#define UI_VISUALIZESORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualizeSort
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *canvasPanel;
    QWidget *controlPanel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *meansSelect;
    QLabel *meansLabel;
    QComboBox *meansCombo;
    QHBoxLayout *number;
    QLabel *numberLabel;
    QSpinBox *numberSpin;
    QHBoxLayout *sleepTime;
    QLabel *timeLabel;
    QSpinBox *timeSpin;
    QHBoxLayout *controlButton;
    QPushButton *startButton;
    QPushButton *initializeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VisualizeSort)
    {
        if (VisualizeSort->objectName().isEmpty())
            VisualizeSort->setObjectName(QString::fromUtf8("VisualizeSort"));
        VisualizeSort->resize(796, 363);
        centralwidget = new QWidget(VisualizeSort);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        canvasPanel = new QWidget(centralwidget);
        canvasPanel->setObjectName(QString::fromUtf8("canvasPanel"));
        canvasPanel->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(canvasPanel, 0, 0, 1, 1);

        controlPanel = new QWidget(centralwidget);
        controlPanel->setObjectName(QString::fromUtf8("controlPanel"));
        controlPanel->setMinimumSize(QSize(250, 300));
        controlPanel->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(controlPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        meansSelect = new QHBoxLayout();
        meansSelect->setObjectName(QString::fromUtf8("meansSelect"));
        meansLabel = new QLabel(controlPanel);
        meansLabel->setObjectName(QString::fromUtf8("meansLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        meansLabel->setFont(font);

        meansSelect->addWidget(meansLabel);

        meansCombo = new QComboBox(controlPanel);
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->addItem(QString());
        meansCombo->setObjectName(QString::fromUtf8("meansCombo"));
        meansCombo->setFont(font);
        meansCombo->setEditable(false);
        meansCombo->setMaxVisibleItems(10);

        meansSelect->addWidget(meansCombo);


        verticalLayout->addLayout(meansSelect);

        number = new QHBoxLayout();
        number->setObjectName(QString::fromUtf8("number"));
        numberLabel = new QLabel(controlPanel);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setFont(font);

        number->addWidget(numberLabel);

        numberSpin = new QSpinBox(controlPanel);
        numberSpin->setObjectName(QString::fromUtf8("numberSpin"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        numberSpin->setFont(font1);
        numberSpin->setMinimum(1);
        numberSpin->setValue(20);

        number->addWidget(numberSpin);


        verticalLayout->addLayout(number);

        sleepTime = new QHBoxLayout();
        sleepTime->setObjectName(QString::fromUtf8("sleepTime"));
        timeLabel = new QLabel(controlPanel);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setFont(font);

        sleepTime->addWidget(timeLabel);

        timeSpin = new QSpinBox(controlPanel);
        timeSpin->setObjectName(QString::fromUtf8("timeSpin"));
        timeSpin->setFont(font1);
        timeSpin->setMaximum(999999999);
        timeSpin->setValue(200);

        sleepTime->addWidget(timeSpin);


        verticalLayout->addLayout(sleepTime);

        controlButton = new QHBoxLayout();
        controlButton->setObjectName(QString::fromUtf8("controlButton"));
        startButton = new QPushButton(controlPanel);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setFont(font);

        controlButton->addWidget(startButton);

        initializeButton = new QPushButton(controlPanel);
        initializeButton->setObjectName(QString::fromUtf8("initializeButton"));
        initializeButton->setFont(font);

        controlButton->addWidget(initializeButton);


        verticalLayout->addLayout(controlButton);


        gridLayout->addWidget(controlPanel, 0, 1, 1, 1);

        VisualizeSort->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VisualizeSort);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 796, 23));
        VisualizeSort->setMenuBar(menubar);
        statusbar = new QStatusBar(VisualizeSort);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VisualizeSort->setStatusBar(statusbar);

        retranslateUi(VisualizeSort);

        QMetaObject::connectSlotsByName(VisualizeSort);
    } // setupUi

    void retranslateUi(QMainWindow *VisualizeSort)
    {
        VisualizeSort->setWindowTitle(QCoreApplication::translate("VisualizeSort", "VisualizeSort", nullptr));
        meansLabel->setText(QCoreApplication::translate("VisualizeSort", "\346\216\222\345\272\217\346\226\271\346\263\225\357\274\232", nullptr));
        meansCombo->setItemText(0, QCoreApplication::translate("VisualizeSort", "\345\206\222\346\263\241\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(1, QCoreApplication::translate("VisualizeSort", "\344\274\230\345\214\226\347\232\204\345\206\222\346\263\241\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(2, QCoreApplication::translate("VisualizeSort", "\351\270\241\345\260\276\351\205\222\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(3, QCoreApplication::translate("VisualizeSort", "\345\277\253\351\200\237\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(4, QCoreApplication::translate("VisualizeSort", "\347\233\264\346\216\245\346\217\222\345\205\245\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(5, QCoreApplication::translate("VisualizeSort", "\344\272\214\345\210\206\346\217\222\345\205\245\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(6, QCoreApplication::translate("VisualizeSort", "\345\270\214\345\260\224\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(7, QCoreApplication::translate("VisualizeSort", "\350\256\241\346\225\260\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(8, QCoreApplication::translate("VisualizeSort", "\347\214\264\345\255\220\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(9, QCoreApplication::translate("VisualizeSort", "\345\237\272\346\225\260\346\216\222\345\272\217", nullptr));
        meansCombo->setItemText(10, QCoreApplication::translate("VisualizeSort", "\345\275\222\345\271\266\346\216\222\345\272\217", nullptr));

        numberLabel->setText(QCoreApplication::translate("VisualizeSort", "\346\225\260\346\215\256\344\270\252\346\225\260\357\274\232", nullptr));
        timeLabel->setText(QCoreApplication::translate("VisualizeSort", "\347\255\211\345\276\205\346\227\266\351\227\264\357\274\232", nullptr));
        startButton->setText(QCoreApplication::translate("VisualizeSort", "\345\274\200\345\247\213\346\216\222\345\272\217", nullptr));
        initializeButton->setText(QCoreApplication::translate("VisualizeSort", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualizeSort: public Ui_VisualizeSort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZESORT_H
