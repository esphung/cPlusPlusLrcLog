#include "window.h"
#include "ui_window.h"
#include <iostream>

using namespace std;

Window::Window(QWidget *parent) : QMainWindow(parent),
  ui(new Ui::Window){
  ui->setupUi(this);

} // end constructor

Window::~Window(){
  delete ui;

} // end destructor





