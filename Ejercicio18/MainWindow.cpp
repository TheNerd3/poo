#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *userLabel = new QLabel("Usuario:");
    QLabel *passwordLabel = new QLabel("Contraseña:");
    userLineEdit = new QLineEdit;
    passwordLineEdit = new QLineEdit;
    passwordLineEdit->setEchoMode(QLineEdit::Password);

    QPushButton *loginButton = new QPushButton("Iniciar sesión");
    connect(loginButton, &QPushButton::clicked, this, &MainWindow::login);

    layout->addWidget(userLabel);
    layout->addWidget(userLineEdit);
    layout->addWidget(passwordLabel);
    layout->addWidget(passwordLineEdit);
    layout->addWidget(loginButton);
}
