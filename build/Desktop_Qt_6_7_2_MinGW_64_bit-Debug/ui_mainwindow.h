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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
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
    QVideoWidget *widget_camera_view;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *capture_options_container;
    QPushButton *capture_image_button;
    QPushButton *capture_video_button;
    QPushButton *go_live_button;
    QPushButton *quit_app_button;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *header_container;
    QLabel *devices_label;
    QLabel *mixer_label;
    QLabel *capture_label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *mixer_container;
    QSlider *mic_audio_slider;
    QSlider *camera_white_balance_slider;
    QLabel *mic_audio_label;
    QLabel *mic_audio_label_2;
    QListWidget *available_camera_devices_list;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuDevices;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1021, 706);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #2d3436;\n"
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
        widget_camera_view = new QVideoWidget(centralwidget);
        widget_camera_view->setObjectName("widget_camera_view");
        widget_camera_view->setGeometry(QRect(-1, 9, 1021, 481));
        widget_camera_view->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(750, 530, 211, 143));
        capture_options_container = new QVBoxLayout(verticalLayoutWidget);
        capture_options_container->setObjectName("capture_options_container");
        capture_options_container->setContentsMargins(0, 0, 0, 0);
        capture_image_button = new QPushButton(verticalLayoutWidget);
        capture_image_button->setObjectName("capture_image_button");
        QFont font;
        font.setFamilies({QString::fromUtf8("PT Bold Stars")});
        font.setPointSize(8);
        font.setBold(false);
        capture_image_button->setFont(font);
        capture_image_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 50px;\n"
"	height: 30px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	width: 50px;\n"
"	height: 150px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 23px;\n"
"}"));

        capture_options_container->addWidget(capture_image_button);

        capture_video_button = new QPushButton(verticalLayoutWidget);
        capture_video_button->setObjectName("capture_video_button");
        capture_video_button->setFont(font);
        capture_video_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 50px;\n"
"	height: 30px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	width: 50px;\n"
"	height: 150px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 23px;\n"
"}"));

        capture_options_container->addWidget(capture_video_button);

        go_live_button = new QPushButton(verticalLayoutWidget);
        go_live_button->setObjectName("go_live_button");
        go_live_button->setFont(font);
        go_live_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 50px;\n"
"	height: 30px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	width: 50px;\n"
"	height: 150px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 23px;\n"
"}"));

        capture_options_container->addWidget(go_live_button);

        quit_app_button = new QPushButton(verticalLayoutWidget);
        quit_app_button->setObjectName("quit_app_button");
        quit_app_button->setFont(font);
        quit_app_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 50px;\n"
"	height: 30px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 25px;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	width: 50px;\n"
"	height: 150px;\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
"	border-radius: 23px;\n"
"}"));

        capture_options_container->addWidget(quit_app_button);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(9, 490, 1001, 31));
        header_container = new QHBoxLayout(horizontalLayoutWidget);
        header_container->setObjectName("header_container");
        header_container->setContentsMargins(0, 0, 0, 0);
        devices_label = new QLabel(horizontalLayoutWidget);
        devices_label->setObjectName("devices_label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("PT Bold Stars")});
        font1.setBold(true);
        devices_label->setFont(font1);
        devices_label->setStyleSheet(QString::fromUtf8("background-color: #e17055;\n"
"color: #dfe6e9;\n"
"border: none;"));
        devices_label->setFrameShape(QFrame::Panel);
        devices_label->setAlignment(Qt::AlignCenter);

        header_container->addWidget(devices_label);

        mixer_label = new QLabel(horizontalLayoutWidget);
        mixer_label->setObjectName("mixer_label");
        mixer_label->setFont(font1);
        mixer_label->setStyleSheet(QString::fromUtf8("background-color: #e17055;\n"
"color: #dfe6e9;\n"
"border: none;"));
        mixer_label->setFrameShape(QFrame::Panel);
        mixer_label->setAlignment(Qt::AlignCenter);

        header_container->addWidget(mixer_label);

        capture_label = new QLabel(horizontalLayoutWidget);
        capture_label->setObjectName("capture_label");
        capture_label->setFont(font1);
        capture_label->setStyleSheet(QString::fromUtf8("background-color: #e17055;\n"
"color: #dfe6e9;\n"
"border: none;"));
        capture_label->setFrameShape(QFrame::Panel);
        capture_label->setAlignment(Qt::AlignCenter);

        header_container->addWidget(capture_label);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(479, 529, 191, 131));
        mixer_container = new QVBoxLayout(verticalLayoutWidget_2);
        mixer_container->setObjectName("mixer_container");
        mixer_container->setContentsMargins(0, 0, 0, 0);
        mic_audio_slider = new QSlider(verticalLayoutWidget_2);
        mic_audio_slider->setObjectName("mic_audio_slider");
        mic_audio_slider->setAutoFillBackground(false);
        mic_audio_slider->setStyleSheet(QString::fromUtf8("QSlider\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"QSlider::groove:horizontal\n"
"{\n"
"	width: 200px;\n"
"	height: 5px;\n"
"	background-color: #b2bec3;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"	width: 25px;\n"
"	height: 25px;\n"
"	margin: -5px 0px;\n"
"	background-color: #fdcb6e;\n"
"}"));
        mic_audio_slider->setOrientation(Qt::Horizontal);

        mixer_container->addWidget(mic_audio_slider);

        camera_white_balance_slider = new QSlider(verticalLayoutWidget_2);
        camera_white_balance_slider->setObjectName("camera_white_balance_slider");
        camera_white_balance_slider->setAutoFillBackground(false);
        camera_white_balance_slider->setStyleSheet(QString::fromUtf8("QSlider\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"QSlider::groove:horizontal\n"
"{\n"
"	width: 200px;\n"
"	height: 5px;\n"
"	background-color: #b2bec3;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"	width: 25px;\n"
"	height: 25px;\n"
"	margin: -5px 0px;\n"
"	background-color: #fdcb6e;\n"
"}"));
        camera_white_balance_slider->setOrientation(Qt::Horizontal);

        mixer_container->addWidget(camera_white_balance_slider);

        mic_audio_label = new QLabel(centralwidget);
        mic_audio_label->setObjectName("mic_audio_label");
        mic_audio_label->setGeometry(QRect(350, 560, 81, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("PT Bold Stars")});
        font2.setPointSize(9);
        mic_audio_label->setFont(font2);
        mic_audio_label->setStyleSheet(QString::fromUtf8("color: #dfe6e9;\n"
"background-color: transparent;"));
        mic_audio_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mic_audio_label_2 = new QLabel(centralwidget);
        mic_audio_label_2->setObjectName("mic_audio_label_2");
        mic_audio_label_2->setGeometry(QRect(350, 610, 121, 20));
        mic_audio_label_2->setFont(font2);
        mic_audio_label_2->setStyleSheet(QString::fromUtf8("color: #dfe6e9;\n"
"background-color: transparent;"));
        mic_audio_label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        available_camera_devices_list = new QListWidget(centralwidget);
        available_camera_devices_list->setObjectName("available_camera_devices_list");
        available_camera_devices_list->setGeometry(QRect(15, 530, 321, 141));
        available_camera_devices_list->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 1px solid #e84393;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1021, 26));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar\n"
"{\n"
"	color: #dfe6e9;\n"
"	background-color: #636e72;\n"
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
        capture_image_button->setText(QCoreApplication::translate("MainWindow", "Capture Image", nullptr));
        capture_video_button->setText(QCoreApplication::translate("MainWindow", "Capture Video", nullptr));
        go_live_button->setText(QCoreApplication::translate("MainWindow", "Go Live", nullptr));
        quit_app_button->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        devices_label->setText(QCoreApplication::translate("MainWindow", "Devices", nullptr));
        mixer_label->setText(QCoreApplication::translate("MainWindow", "Mixer", nullptr));
        capture_label->setText(QCoreApplication::translate("MainWindow", "Capture Options", nullptr));
        mic_audio_label->setText(QCoreApplication::translate("MainWindow", "Mic Audio", nullptr));
        mic_audio_label_2->setText(QCoreApplication::translate("MainWindow", "White Balance", nullptr));
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
