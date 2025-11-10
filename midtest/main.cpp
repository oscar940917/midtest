#include "mainwindow.h"
#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create two windows with proper titles
    MainWindow w1;
    MainWindow w2;

    // Set window titles to distinguish them
    w1.setWindowTitle("Window 1");
    w2.setWindowTitle("Window 2");

    // Show first window
    w1.show();

    // Get the actual frame geometry (including window decorations)
    QRect w1Geometry = w1.frameGeometry();
    
    // Position second window next to first with a small gap
    int spacing = 10;  // 10 pixel gap between windows
    w2.move(w1Geometry.x() + w1Geometry.width() + spacing, w1Geometry.y());
    w2.show();

    return a.exec();
}
