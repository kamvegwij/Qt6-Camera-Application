#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect the camera:

    m_camera.reset(new QCamera(QMediaDevices::defaultVideoInput()));
    m_CaptureSession.setCamera(m_camera.data());
    m_CaptureSession.setVideoOutput(ui->widget_camera_view);

    //setup image capturing:
    //m_imageCapture.reset(new QImageCapture(m_camera.data()));
    //m_CaptureSession.setImageCapture(m_imageCapture);

    connect(m_camera.data(), &QCamera::activeChanged, this, &MainWindow::cameraActiveChanged);

    m_camera->setWhiteBalanceMode(QCamera::WhiteBalanceManual);
    m_camera->start();

    _setup_devices_display();
    _setup_ui();

}

MainWindow::~MainWindow()
{
    disconnect(m_camera.data(), &QCamera::activeChanged, this, &MainWindow::cameraActiveChanged);
    delete ui;
}

void MainWindow::cameraActiveChanged(bool isActive)
{
    if (!isActive)
    {
        ui->warning_label->setText("Camera is not active.");
        ui->warning_label->show();
        ui->camera_state_toggle_button->setText("Off");
    }
    else
    {
        ui->warning_label->setText("");
        ui->warning_label->hide();
        ui->camera_state_toggle_button->setText("On");
    }
}

void MainWindow::_setup_devices_display()
{
    //load available devices:
    QVector<QString> loadedCameraDevices;

    //display available devices:
    for (const QCameraDevice &info : QMediaDevices::videoInputs())
    {
        QString deviceName = info.description();
        loadedCameraDevices.append(deviceName);
        ui->available_camera_devices_list->addItem(deviceName);
    }
}
void MainWindow::_setup_ui()
{
    ui->camera_state_toggle_button->setChecked(true);
    ui->camera_white_balance_slider->setMinimum(0);
    ui->camera_white_balance_slider->setMaximum(50);
    ui->camera_white_balance_slider->setValue(5);
}

void MainWindow::on_camera_state_toggle_button_toggled(bool checked)
{
    if (checked){
        m_camera->start();
    }
    else{
        m_camera->stop();
    }
    cameraActiveChanged(m_camera->isActive());
}
void MainWindow::_view_captured_media()
{
    QMessageBox::information(0, "View Capture", "This screen will display your current captured media!");
}
void MainWindow::on_view_capture_button_clicked()
{
    _view_captured_media();
}

void MainWindow::capture_image()
{
    m_imageCapture->capture();
}
void MainWindow::on_capture_image_button_clicked()
{
    capture_image();
}

void MainWindow::capture_video()
{

}
void MainWindow::on_capture_video_button_clicked()
{
    capture_video();
}

void MainWindow::capture_go_live()
{

}
void MainWindow::on_go_live_button_clicked()
{
    capture_go_live();
}


void MainWindow::on_camera_white_balance_slider_sliderMoved(int position)
{
    m_camera->setColorTemperature(position);
}
void MainWindow::on_camera_white_balance_slider_valueChanged(int value)
{

}


void MainWindow::on_quit_app_button_clicked()
{
    QApplication::exit();
}


