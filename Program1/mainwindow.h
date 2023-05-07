#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSerialPort>
#include <QList>
#include <QDateTime>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonSzukaj_clicked();

    void on_pushButtonPolacz_clicked();

    void on_pushButtonRozlacz_clicked();

    void onErrorOccurred(QSerialPort::SerialPortError error);
    void readFromPort();
    void onTimerInterrupt();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
private:
    void addToLogs(QString message);
private:
    int l1;
    int l2;
    int l3;
    int l4;
    unsigned char StanWejsc;
    unsigned char StanWyjsc;
    unsigned int AC1Wejscie;
    unsigned int AC2Wejscie;
    unsigned int AC3Wejscie;
    unsigned int AC1Wyjscie;
    unsigned int AC2Wyjscie;
    unsigned int AC3Wyjscie;
    QSerialPort * device;
    QTimer * timer;

};
#endif // MAINWINDOW_H
