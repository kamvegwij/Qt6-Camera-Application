#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QCamera>
#include <QMediaDevices>
#include <QMediaCaptureSession>
#include <QVideoWidget>
#include <QImageCapture>
#include <QScopedPointer>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_capture_image_button_clicked();

    void on_capture_video_button_clicked();

    void on_go_live_button_clicked();

    void on_quit_app_button_clicked();

    void on_camera_state_toggle_button_toggled(bool isOn);

    void on_camera_white_balance_slider_sliderMoved(int position);

    void on_camera_white_balance_slider_valueChanged(int value);

    void on_view_capture_button_clicked();

private:
    Ui::MainWindow *ui;
    QScopedPointer<QCamera> m_camera;
    QScopedPointer<QImageCapture> m_imageCapture;

    QMediaCaptureSession m_CaptureSession;

    void capture_image();
    void capture_video();
    void capture_go_live();
    void cameraActiveChanged(bool isTrue);
    void _view_captured_media();
    void _setup_devices_display();
    void _setup_ui();
};
#endif // MAINWINDOW_H
