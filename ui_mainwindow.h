/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *buttonPink;
    QGroupBox *groupBoxRight;
    QGridLayout *gridLayout_5;
    QRadioButton *rightGreenBox;
    QRadioButton *rightRedBox;
    QRadioButton *rightPinkBox;
    QRadioButton *rightBlueBox;
    QRadioButton *rightYellowBox;
    QRadioButton *rightSkyBox;
    QRadioButton *rightOrangeBox;
    QRadioButton *rightWhiteBox;
    QPushButton *buttonGreen;
    QPushButton *buttonSky;
    QGroupBox *groupBoxMiddle;
    QGridLayout *gridLayout_4;
    QRadioButton *middleGreenBox;
    QRadioButton *middleRedBox;
    QRadioButton *middlePinkBox;
    QRadioButton *middleBlueBox;
    QRadioButton *middleYellowBox;
    QRadioButton *middleSkyBox;
    QRadioButton *middleOrangeBox;
    QRadioButton *middleWhiteBox;
    QPushButton *buttonWhite;
    QPushButton *buttonBlue;
    QGroupBox *groupBoxleft;
    QGridLayout *gridLayout_3;
    QRadioButton *leftGreenBox;
    QRadioButton *leftRedBox;
    QRadioButton *leftPinkBox;
    QRadioButton *leftBlueBox;
    QRadioButton *leftYellowBox;
    QRadioButton *leftSkyBox;
    QRadioButton *leftOrangeBox;
    QRadioButton *leftWhiteBox;
    QPushButton *buttonRed;
    QPushButton *buttonYellow;
    QPushButton *buttonOrange;
    QDial *dial;
    QPushButton *buttonTest;
    QGroupBox *effectModeBox;
    QGridLayout *gridLayout_2;
    QRadioButton *modeBreathe;
    QSpacerItem *verticalSpacer;
    QRadioButton *modeWave;
    QRadioButton *modeGaming;
    QRadioButton *modeNormal;
    QRadioButton *modeDemo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(538, 456);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Apps-nepomuk-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonPink = new QPushButton(centralwidget);
        buttonPink->setObjectName(QString::fromUtf8("buttonPink"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonPink->sizePolicy().hasHeightForWidth());
        buttonPink->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Places-folder-violet-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPink->setIcon(icon1);

        gridLayout->addWidget(buttonPink, 3, 0, 1, 1);

        groupBoxRight = new QGroupBox(centralwidget);
        groupBoxRight->setObjectName(QString::fromUtf8("groupBoxRight"));
        gridLayout_5 = new QGridLayout(groupBoxRight);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        rightGreenBox = new QRadioButton(groupBoxRight);
        rightGreenBox->setObjectName(QString::fromUtf8("rightGreenBox"));
        rightGreenBox->setChecked(true);

        gridLayout_5->addWidget(rightGreenBox, 0, 0, 1, 1);

        rightRedBox = new QRadioButton(groupBoxRight);
        rightRedBox->setObjectName(QString::fromUtf8("rightRedBox"));

        gridLayout_5->addWidget(rightRedBox, 1, 0, 1, 1);

        rightPinkBox = new QRadioButton(groupBoxRight);
        rightPinkBox->setObjectName(QString::fromUtf8("rightPinkBox"));

        gridLayout_5->addWidget(rightPinkBox, 2, 0, 1, 1);

        rightBlueBox = new QRadioButton(groupBoxRight);
        rightBlueBox->setObjectName(QString::fromUtf8("rightBlueBox"));

        gridLayout_5->addWidget(rightBlueBox, 3, 0, 1, 1);

        rightYellowBox = new QRadioButton(groupBoxRight);
        rightYellowBox->setObjectName(QString::fromUtf8("rightYellowBox"));

        gridLayout_5->addWidget(rightYellowBox, 4, 0, 1, 1);

        rightSkyBox = new QRadioButton(groupBoxRight);
        rightSkyBox->setObjectName(QString::fromUtf8("rightSkyBox"));

        gridLayout_5->addWidget(rightSkyBox, 5, 0, 1, 1);

        rightOrangeBox = new QRadioButton(groupBoxRight);
        rightOrangeBox->setObjectName(QString::fromUtf8("rightOrangeBox"));

        gridLayout_5->addWidget(rightOrangeBox, 6, 0, 1, 1);

        rightWhiteBox = new QRadioButton(groupBoxRight);
        rightWhiteBox->setObjectName(QString::fromUtf8("rightWhiteBox"));

        gridLayout_5->addWidget(rightWhiteBox, 7, 0, 1, 1);


        gridLayout->addWidget(groupBoxRight, 1, 3, 8, 1);

        buttonGreen = new QPushButton(centralwidget);
        buttonGreen->setObjectName(QString::fromUtf8("buttonGreen"));
        sizePolicy.setHeightForWidth(buttonGreen->sizePolicy().hasHeightForWidth());
        buttonGreen->setSizePolicy(sizePolicy);
        buttonGreen->setLayoutDirection(Qt::LeftToRight);
        buttonGreen->setAutoFillBackground(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Places-folder-green-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonGreen->setIcon(icon2);

        gridLayout->addWidget(buttonGreen, 1, 0, 1, 1);

        buttonSky = new QPushButton(centralwidget);
        buttonSky->setObjectName(QString::fromUtf8("buttonSky"));
        sizePolicy.setHeightForWidth(buttonSky->sizePolicy().hasHeightForWidth());
        buttonSky->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Places-folder-cyan-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSky->setIcon(icon3);

        gridLayout->addWidget(buttonSky, 6, 0, 1, 1);

        groupBoxMiddle = new QGroupBox(centralwidget);
        groupBoxMiddle->setObjectName(QString::fromUtf8("groupBoxMiddle"));
        gridLayout_4 = new QGridLayout(groupBoxMiddle);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        middleGreenBox = new QRadioButton(groupBoxMiddle);
        middleGreenBox->setObjectName(QString::fromUtf8("middleGreenBox"));
        middleGreenBox->setChecked(true);

        gridLayout_4->addWidget(middleGreenBox, 0, 0, 1, 1);

        middleRedBox = new QRadioButton(groupBoxMiddle);
        middleRedBox->setObjectName(QString::fromUtf8("middleRedBox"));

        gridLayout_4->addWidget(middleRedBox, 1, 0, 1, 1);

        middlePinkBox = new QRadioButton(groupBoxMiddle);
        middlePinkBox->setObjectName(QString::fromUtf8("middlePinkBox"));

        gridLayout_4->addWidget(middlePinkBox, 2, 0, 1, 1);

        middleBlueBox = new QRadioButton(groupBoxMiddle);
        middleBlueBox->setObjectName(QString::fromUtf8("middleBlueBox"));

        gridLayout_4->addWidget(middleBlueBox, 3, 0, 1, 1);

        middleYellowBox = new QRadioButton(groupBoxMiddle);
        middleYellowBox->setObjectName(QString::fromUtf8("middleYellowBox"));

        gridLayout_4->addWidget(middleYellowBox, 4, 0, 1, 1);

        middleSkyBox = new QRadioButton(groupBoxMiddle);
        middleSkyBox->setObjectName(QString::fromUtf8("middleSkyBox"));

        gridLayout_4->addWidget(middleSkyBox, 5, 0, 1, 1);

        middleOrangeBox = new QRadioButton(groupBoxMiddle);
        middleOrangeBox->setObjectName(QString::fromUtf8("middleOrangeBox"));

        gridLayout_4->addWidget(middleOrangeBox, 6, 0, 1, 1);

        middleWhiteBox = new QRadioButton(groupBoxMiddle);
        middleWhiteBox->setObjectName(QString::fromUtf8("middleWhiteBox"));

        gridLayout_4->addWidget(middleWhiteBox, 7, 0, 1, 1);


        gridLayout->addWidget(groupBoxMiddle, 1, 2, 8, 1);

        buttonWhite = new QPushButton(centralwidget);
        buttonWhite->setObjectName(QString::fromUtf8("buttonWhite"));
        sizePolicy.setHeightForWidth(buttonWhite->sizePolicy().hasHeightForWidth());
        buttonWhite->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Places-folder-grey-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonWhite->setIcon(icon4);

        gridLayout->addWidget(buttonWhite, 8, 0, 1, 1);

        buttonBlue = new QPushButton(centralwidget);
        buttonBlue->setObjectName(QString::fromUtf8("buttonBlue"));
        sizePolicy.setHeightForWidth(buttonBlue->sizePolicy().hasHeightForWidth());
        buttonBlue->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Places-folder-blue-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonBlue->setIcon(icon5);

        gridLayout->addWidget(buttonBlue, 4, 0, 1, 1);

        groupBoxleft = new QGroupBox(centralwidget);
        groupBoxleft->setObjectName(QString::fromUtf8("groupBoxleft"));
        gridLayout_3 = new QGridLayout(groupBoxleft);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        leftGreenBox = new QRadioButton(groupBoxleft);
        leftGreenBox->setObjectName(QString::fromUtf8("leftGreenBox"));
        leftGreenBox->setChecked(true);

        gridLayout_3->addWidget(leftGreenBox, 0, 0, 1, 1);

        leftRedBox = new QRadioButton(groupBoxleft);
        leftRedBox->setObjectName(QString::fromUtf8("leftRedBox"));

        gridLayout_3->addWidget(leftRedBox, 1, 0, 1, 1);

        leftPinkBox = new QRadioButton(groupBoxleft);
        leftPinkBox->setObjectName(QString::fromUtf8("leftPinkBox"));

        gridLayout_3->addWidget(leftPinkBox, 2, 0, 1, 1);

        leftBlueBox = new QRadioButton(groupBoxleft);
        leftBlueBox->setObjectName(QString::fromUtf8("leftBlueBox"));

        gridLayout_3->addWidget(leftBlueBox, 3, 0, 1, 1);

        leftYellowBox = new QRadioButton(groupBoxleft);
        leftYellowBox->setObjectName(QString::fromUtf8("leftYellowBox"));

        gridLayout_3->addWidget(leftYellowBox, 4, 0, 1, 1);

        leftSkyBox = new QRadioButton(groupBoxleft);
        leftSkyBox->setObjectName(QString::fromUtf8("leftSkyBox"));

        gridLayout_3->addWidget(leftSkyBox, 5, 0, 1, 1);

        leftOrangeBox = new QRadioButton(groupBoxleft);
        leftOrangeBox->setObjectName(QString::fromUtf8("leftOrangeBox"));

        gridLayout_3->addWidget(leftOrangeBox, 6, 0, 1, 1);

        leftWhiteBox = new QRadioButton(groupBoxleft);
        leftWhiteBox->setObjectName(QString::fromUtf8("leftWhiteBox"));

        gridLayout_3->addWidget(leftWhiteBox, 7, 0, 1, 1);


        gridLayout->addWidget(groupBoxleft, 1, 1, 8, 1);

        buttonRed = new QPushButton(centralwidget);
        buttonRed->setObjectName(QString::fromUtf8("buttonRed"));
        sizePolicy.setHeightForWidth(buttonRed->sizePolicy().hasHeightForWidth());
        buttonRed->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Places-folder-red-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRed->setIcon(icon6);

        gridLayout->addWidget(buttonRed, 2, 0, 1, 1);

        buttonYellow = new QPushButton(centralwidget);
        buttonYellow->setObjectName(QString::fromUtf8("buttonYellow"));
        sizePolicy.setHeightForWidth(buttonYellow->sizePolicy().hasHeightForWidth());
        buttonYellow->setSizePolicy(sizePolicy);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Places-folder-yellow-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonYellow->setIcon(icon7);

        gridLayout->addWidget(buttonYellow, 5, 0, 1, 1);

        buttonOrange = new QPushButton(centralwidget);
        buttonOrange->setObjectName(QString::fromUtf8("buttonOrange"));
        sizePolicy.setHeightForWidth(buttonOrange->sizePolicy().hasHeightForWidth());
        buttonOrange->setSizePolicy(sizePolicy);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Places-folder-orange-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonOrange->setIcon(icon8);

        gridLayout->addWidget(buttonOrange, 7, 0, 1, 1);

        dial = new QDial(centralwidget);
        dial->setObjectName(QString::fromUtf8("dial"));
#if QT_CONFIG(statustip)
        dial->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
        dial->setMinimum(0);
        dial->setMaximum(3);
        dial->setPageStep(1);
        dial->setValue(3);
        dial->setSliderPosition(3);
        dial->setInvertedAppearance(false);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        gridLayout->addWidget(dial, 9, 0, 1, 1);

        buttonTest = new QPushButton(centralwidget);
        buttonTest->setObjectName(QString::fromUtf8("buttonTest"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/Places-bookmarks-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonTest->setIcon(icon9);

        gridLayout->addWidget(buttonTest, 10, 0, 1, 1);

        effectModeBox = new QGroupBox(centralwidget);
        effectModeBox->setObjectName(QString::fromUtf8("effectModeBox"));
        effectModeBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_2 = new QGridLayout(effectModeBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        modeBreathe = new QRadioButton(effectModeBox);
        modeBreathe->setObjectName(QString::fromUtf8("modeBreathe"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/Actions-view-preview-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modeBreathe->setIcon(icon10);

        gridLayout_2->addWidget(modeBreathe, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 2, 1);

        modeWave = new QRadioButton(effectModeBox);
        modeWave->setObjectName(QString::fromUtf8("modeWave"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/Actions-fill-color-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modeWave->setIcon(icon11);

        gridLayout_2->addWidget(modeWave, 1, 5, 1, 1);

        modeGaming = new QRadioButton(effectModeBox);
        modeGaming->setObjectName(QString::fromUtf8("modeGaming"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/Actions-games-config-theme-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modeGaming->setIcon(icon12);

        gridLayout_2->addWidget(modeGaming, 0, 3, 1, 1);

        modeNormal = new QRadioButton(effectModeBox);
        modeNormal->setObjectName(QString::fromUtf8("modeNormal"));
        modeNormal->setIcon(icon);
        modeNormal->setChecked(true);

        gridLayout_2->addWidget(modeNormal, 0, 1, 1, 1);

        modeDemo = new QRadioButton(effectModeBox);
        modeDemo->setObjectName(QString::fromUtf8("modeDemo"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/Apps-preferences-desktop-icons-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modeDemo->setIcon(icon13);

        gridLayout_2->addWidget(modeDemo, 1, 1, 1, 1);


        gridLayout->addWidget(effectModeBox, 9, 1, 2, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 538, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MSIKLM-GUI", nullptr));
        buttonPink->setText(QCoreApplication::translate("MainWindow", "All Pink", nullptr));
        groupBoxRight->setTitle(QCoreApplication::translate("MainWindow", "Right Pattern", nullptr));
        rightGreenBox->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        rightRedBox->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        rightPinkBox->setText(QCoreApplication::translate("MainWindow", "Pink", nullptr));
        rightBlueBox->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        rightYellowBox->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        rightSkyBox->setText(QCoreApplication::translate("MainWindow", "Sky", nullptr));
        rightOrangeBox->setText(QCoreApplication::translate("MainWindow", "Orange", nullptr));
        rightWhiteBox->setText(QCoreApplication::translate("MainWindow", "White", nullptr));
        buttonGreen->setText(QCoreApplication::translate("MainWindow", "All Green", nullptr));
        buttonSky->setText(QCoreApplication::translate("MainWindow", "All Sky", nullptr));
        groupBoxMiddle->setTitle(QCoreApplication::translate("MainWindow", "Middle Pattern", nullptr));
        middleGreenBox->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        middleRedBox->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        middlePinkBox->setText(QCoreApplication::translate("MainWindow", "Pink", nullptr));
        middleBlueBox->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        middleYellowBox->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        middleSkyBox->setText(QCoreApplication::translate("MainWindow", "Sky", nullptr));
        middleOrangeBox->setText(QCoreApplication::translate("MainWindow", "Orange", nullptr));
        middleWhiteBox->setText(QCoreApplication::translate("MainWindow", "White", nullptr));
        buttonWhite->setText(QCoreApplication::translate("MainWindow", "All White", nullptr));
        buttonBlue->setText(QCoreApplication::translate("MainWindow", "All Blue", nullptr));
        groupBoxleft->setTitle(QCoreApplication::translate("MainWindow", "Left Pattern", nullptr));
        leftGreenBox->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        leftRedBox->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        leftPinkBox->setText(QCoreApplication::translate("MainWindow", "Pink", nullptr));
        leftBlueBox->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        leftYellowBox->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        leftSkyBox->setText(QCoreApplication::translate("MainWindow", "Sky", nullptr));
        leftOrangeBox->setText(QCoreApplication::translate("MainWindow", "Orange", nullptr));
        leftWhiteBox->setText(QCoreApplication::translate("MainWindow", "White", nullptr));
        buttonRed->setText(QCoreApplication::translate("MainWindow", "All Red", nullptr));
        buttonYellow->setText(QCoreApplication::translate("MainWindow", "All Yellow", nullptr));
        buttonOrange->setText(QCoreApplication::translate("MainWindow", "All Orange", nullptr));
        buttonTest->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        effectModeBox->setTitle(QCoreApplication::translate("MainWindow", "Effect Modes:", nullptr));
        modeBreathe->setText(QCoreApplication::translate("MainWindow", "Breathe", nullptr));
        modeWave->setText(QCoreApplication::translate("MainWindow", "Wave", nullptr));
        modeGaming->setText(QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        modeNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        modeDemo->setText(QCoreApplication::translate("MainWindow", "Demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
