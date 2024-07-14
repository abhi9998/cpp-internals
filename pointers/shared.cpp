#include<iostream>
#include<string>

using namespace std;

class Project{
    std::string name;

    public: 
        void SetName(const std::string& name){
            this->name = name;
        }

        void ShoeProjectDetails() const{
            cout << "Project Name: " << name << endl;
        }
};

class Emp{
    std::unique_ptr<Project> project{};

    public :
        void SetProject(std::unique_ptr<Project> &project){
            this->project.reset(project.release());
        }

       const std::unique_ptr<Project>& GetProject() const {
            return project;
        }
};


void ShowInfoFromEmployee(const std::unique_ptr<Emp> &emp){
    emp->GetProject()->ShoeProjectDetails();
    return ;
}

int main(){

    std::unique_ptr<Emp> emp{new Emp{}};
    std::unique_ptr<Project> project{new Project{}};
    project->SetName("Smart City");
    emp->SetProject(project);

    // std::unique_ptr<Project> project1{emp->GetProject()};
    // project1->ShoeProjectDetails();

    ShowInfoFromEmployee(emp);

    // delete project;
    

    return 0;

}