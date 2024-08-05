#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //load available devices:
    QVector<QString> loadedCameraDevices;

    for (const QCameraDevice &info : QMediaDevices::videoInputs())
    {
        QString deviceName = info.description();
        loadedCameraDevices.append(deviceName);
        ui->available_camera_devices_list->addItem(deviceName);
    }

    //connect the camera:

    m_camera.reset(new QCamera(QMediaDevices::defaultVideoInput()));
    mediaCaptureSession.setCamera(m_camera.data());
    mediaCaptureSession.setVideoOutput(ui->widget_camera_view);
    m_camera->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::capture_image()
{
    if (!m_camera->isActive()){
        m_camera->start();
    }
    else{
        m_camera->stop();
    }
}

void MainWindow::capture_video()
{

}

void MainWindow::capture_go_live()
{

}

void MainWindow::on_capture_image_button_clicked()
{
    capture_image();
}


void MainWindow::on_capture_video_button_clicked()
{

}


void MainWindow::on_go_live_button_clicked()
{

}


void MainWindow::on_quit_app_button_clicked()
{
    QApplication::exit();
}

