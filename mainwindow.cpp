#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //detect the camera:
    QList<QCameraDevice> available_cameras = QMediaDevices::videoInputs();

    for (const QCameraDevice &cameraDeviceInfo : available_cameras)
    {
        qDebug() << cameraDeviceInfo.description(); //display the found camera devices.
    }

    //connect the camera:
    //m_camera.reset(QMediaDevices::defaultVideoInput());
    QVideoWidget videoWidget;
    videoWidget.resize(500,500);
    videoWidget.setParent(ui->widget_camera_view);
    videoWidget.show();

    QMediaCaptureSession mediaCaptureSession;
    mediaCaptureSession.setCamera(m_camera);
    mediaCaptureSession.setVideoOutput(videoWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_capture_button_clicked()
{
    capture_camera();
}

void MainWindow::capture_camera()
{
    if (!m_camera->isActive()){
        m_camera->start();
        ui->capture_button->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
    else{
        m_camera->stop();
        ui->capture_button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }

}

