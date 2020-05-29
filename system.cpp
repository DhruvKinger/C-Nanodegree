#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>

#include "process.h"
#include "processor.h"
#include "system.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;


Processor& System::Cpu() { return cpu_; }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() { 
  processes_.clear();
  vector<int>PidS=LinuxParser::Pids();
  for(auto pid:pidS)
  {
    Process p(pid);
    processes_.push_back(p); // at back of vector
  }
  std::sort(processes_.begin(), processes_.end()); //sorting them
  return processes_; 
}


std::string System::Kernel() { return  LinuxParser::Kernel(); }

float System::MemoryUtilization() { return LinuxParser::MemoryUtilization(); }


std::string System::OperatingSystem() { return LinuxParser::OperatingSystem(); }


int System::RunningProcesses() {  return LinuxParser::RunningProcesses(); }


int System::TotalProcesses() { 
  return LinuxParser::TotalProcesses();
}


long int System::UpTime() {
  return LinuxParser::UpTime();
                          }
