#include "window.h"
#include <QApplication>
#include <QQueue>
#include <iostream>
#include <QListWidget>

using namespace std;

int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  Window windowObject;
  windowObject.show();

  // student list
  QList<int> list;
  list << 1 << 2 << 3;
  std::cout << "List size: " << list.size() << std::endl;
  // list: [1,2,3]

  // queue students from list
  QQueue<int> queue;
  for(int i = 0; i<list.size(); i++){
    queue.enqueue(list.at(i));
    } // end for fill qeue

  //queue.enqueue(list.at(0));
  //queue.enqueue(list.at(1));
  //queue.enqueue(list.at(2));



  // dequeue all
  while (!queue.isEmpty())
      std::cout << queue.dequeue() << std::endl;






  return a.exec();
} // end main


