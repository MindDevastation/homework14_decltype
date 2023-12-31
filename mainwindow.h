#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "monsters.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    monsters zombie{"Zombie", 204.1, 10.2, 15, 3, 20};
    decltype(zombie) skeleton{"Skeleton", 151.2, 2.2, 45, 3, 70};
    decltype(zombie) banshee{"Banshee", 75.2, 70, 25, 0, 150};
    decltype(zombie) lynx{"Lynx", 24, 0, 35, 5, 50};

private slots:
    void on_monster_activated(int index);

    void printMonster(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
