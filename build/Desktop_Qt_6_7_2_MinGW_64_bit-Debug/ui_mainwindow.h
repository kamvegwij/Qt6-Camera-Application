/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSupport_Jungo;
    QAction *actionSelect;
    QAction *actionView;
    QAction *actionOpen;
    QWidget *centralwidget;
    QPushButton *capture_button;
    QVideoWidget *widget_camera_view;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuDevices;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(735, 576);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #e17055;\n"
""));
        actionSupport_Jungo = new QAction(MainWindow);
        actionSupport_Jungo->setObjectName("actionSupport_Jungo");
        actionSelect = new QAction(MainWindow);
        actionSelect->setObjectName("actionSelect");
        actionView = new QAction(MainWindow);
        actionView->setObjectName("actionView");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        capture_button = new QPushButton(centralwidget);
        capture_button->setObjectName("capture_button");
        capture_button->setGeometry(QRect(650, 480, 61, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("ROG Fonts")});
        font.setPointSize(5);
        font.setBold(false);
        capture_button->setFont(font);
        capture_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: #dfe6e9;\n"
"	background-color: #2d3436;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 23px;\n"
"}"));
        widget_camera_view = new QVideoWidget(centralwidget);
        widget_camera_view->setObjectName("widget_camera_view");
        widget_camera_view->setGeometry(QRect(9, 9, 721, 451));
        widget_camera_view->setStyleSheet(QString::fromUtf8("border: 1px solid #d63031;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 735, 26));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar\n"
"{\n"
"	color: #dfe6e9;\n"
"	background-color: #2d3436;\n"
"}\n"
"QMenu\n"
"{\n"
"	background-color: #2d3436;\n"
"}\n"
"QAction\n"
"{\n"
"	border: 1px solid #dfe6e9;\n"
"}"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuHelp->setStyleSheet(QString::fromUtf8(""));
        menuDevices = new QMenu(menubar);
        menuDevices->setObjectName("menuDevices");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuDevices->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionSupport_Jungo);
        menuDevices->addAction(actionSelect);
        menuDevices->addAction(actionView);
        menuFile->addAction(actionOpen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSupport_Jungo->setText(QCoreApplication::translate("MainWindow", "Support Jungo", nullptr));
        actionSelect->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        actionView->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        capture_button->setText(QCoreApplication::translate("MainWindow", "Capture", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuDevices->setTitle(QCoreApplication::translate("MainWindow", "Devices", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
