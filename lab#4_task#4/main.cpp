#include<iostream>
#include<list>
#include "Task.h"
#include "ToDoList.h"

using namespace std;

int main() {
    ToDoList mainList("Main List");
  

    mainList.addTask("Task 1","ECS Assignment");

    mainList.addTask("Task 2","OOP Assignment");

	mainList.markTaskCompleted("Task 2"); 
    mainList.display();

    return 0;
}