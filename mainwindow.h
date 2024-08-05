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

private:
    Ui::MainWindow *ui;
    QScopedPointer<QCamera> m_camera;
    QMediaCaptureSession mediaCaptureSession;
    void capture_image();
    void capture_video();
    void capture_go_live();

};
#endif // MAINWINDOW_H
