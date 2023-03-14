#include <string>
#include <vector>

class Course {
private:
  int m_id;
  std::string m_name;

public:
  Course(int id, std::string name) {
    this->m_id = id;
    this->m_name = name;
  }

  int get_id();
  std::string get_name();
};

int Course::get_id() { return this->m_id; }

std::string Course::get_name() { return this->m_name; }

class Student {
private:
  std::string m_firstname;
  std::string m_lastname;
  int m_age;
  std::vector<Course> *m_courses;

public:
  Student(std::string firstname, std::string lastname, int age) {
    this->m_firstname = firstname;
    this->m_lastname = lastname;
    this->m_age = age;
    this->m_courses = new std::vector<Course>();
  }

  ~Student() { delete this->m_courses; }

  void have_birthday();
  int get_age();
  void enroll(Course course);
};

void Student::have_birthday() { this->m_age += 1; }

int Student::get_age() { return this->m_age; }

void Student::enroll(Course course) {
    bool exists = false;
    for(auto c : *this->m_courses)
    {
        if(c.get_id() == course.get_id())
        {
            exists = true;
            break;
        }
    }
    if(!exists)
    {
        this->m_courses->push_back(course);
    }
}

int main() {}
