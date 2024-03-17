using namespace std;
class ToDoList {
private:
    string listName;
    list<Task> tasks;
    list<ToDoList> subLists;
public:
    ToDoList(const string& name) : listName(name) {}

   //Add task
    void addTask(const string& taskName, const string& details) {
        tasks.push_back(Task(taskName,details));
    }

  

	//Mark as Complete
    void markTaskCompleted(const string& taskName) {
        for (auto& task : tasks) {
            if (task.getTaskName() == taskName) {
                task.markCompleted();
                return;
            }
        }
      
    }

    // Displays
    void display() {
        cout << "List: " << listName << endl;
        cout << "Tasks:" << endl;
        for (const auto& task : tasks) {
            cout << "- " << task.getTaskName() << "  ";
			cout << "Details:" << task.getTaskDetails() << endl;
            if (task.isCompleted()) {
                cout << " (Completed)";
            }
            cout << endl;
        }
    }
};