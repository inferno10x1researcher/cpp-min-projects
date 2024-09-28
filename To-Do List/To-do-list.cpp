#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

void showTasks(const vector<string>& tasks) {
    cout << "To Do List: " << endl;

    for(int i = 0; i < tasks.size(); ++i){
        cout << i+1 << " . " << tasks[i] << endl;
    }
}

int main(){
    vector<string> tasks;
    string task;
    char choice;

    ifstream inputFile("tasks.txt");
    string line;
    while (getline(inputFile, line)){
        tasks.push_back(line);
    }
    inputFile.close();

    do {
        showTasks(tasks);

        cout << "A - Add a task" << endl;
        cout << "D - Delete a task" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 'A':   
                cout << "Enter a new task: ";
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                break;
            case 'D':
                cout << "Enter the number of the task you want to delete: ";
                int num;
                cin >> num;
                if(num > 0 && num <= tasks.size()){
                    tasks.erase(tasks.begin() + num - 1);
                } else {
                    cout << "Invalid task number" << endl;
                }
                break;
            case 'Q':
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'Q');

    return 0;
}