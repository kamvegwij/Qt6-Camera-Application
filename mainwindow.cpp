#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setup UI widgets:

    ui->capture_button->setEnabled(false);

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

void MainWindow::on_capture_button_clicked()
{
    capture_camera();
}

void MainWindow::capture_camera()
{
    if (!m_camera->isActive()){
        m_camera->start();
    }
    else{
        m_camera->stop();
    }
}

