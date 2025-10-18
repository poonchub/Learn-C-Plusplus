#include "MainWindow.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // สร้าง widget หลักของ window
    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    // สร้าง layout
    QVBoxLayout *layout = new QVBoxLayout(central);

    // สร้างปุ่มและ label
    label = new QLabel("Hello, Qt!", this);
    button = new QPushButton("Click me", this);

    // เพิ่ม widget เข้า layout
    layout->addWidget(label);
    layout->addWidget(button);

    // เชื่อม signal-slot
    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);

    setWindowTitle("My First Qt App");
    resize(300, 150);
}

MainWindow::~MainWindow() {
    
}

void MainWindow::onButtonClicked() {
    label->setText("Button clicked!");
}