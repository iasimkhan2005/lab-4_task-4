using namespace std;
class Task {
private:
    string taskName, description ;
    bool completed;
public:
    Task( const string name, const string details) : taskName(name),description(details), completed(false) {}
    
    void markCompleted() {
        completed = true;
    }

    bool isCompleted() const {
        return completed;
    }

    string getTaskName() const {
        return taskName;
    }
    string getTaskDetails() const {
		return description;
    }

};