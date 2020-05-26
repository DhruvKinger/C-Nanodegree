# C++ Nanodegree

* [C++ STL](https://en.wikipedia.org/wiki/C%2B%2B_Standard_Library)
* [C++ Guidlines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sl2-prefer-the-standard-library-to-other-libraries)

![](https://video.udacity-data.com/topher/2019/September/5d72d41b_course-intro/course-intro.png)

![](https://video.udacity-data.com/topher/2019/August/5d4b4e28_l2-intro/l2-intro.png)

### Size of 1D Vector
 * vector<int> a;
 * cout<<a.size();
  
### Size of 2D Vector
  * vector<vector<int>> x;
  * cout<<x[0].size();
  
  ### Print 2D Vector
  * vector<vector<int>> b;
  * for(auto i:b)  {
  * for(auto x:i)  {
  * cout<<x<<" ";  }
  * cout<<"\n";   }

### Recap
* That's it! To recap, there are essentially four steps to reading a file:

* #include fstream
* Create a std::ifstream object using the path to your file.
* Evaluate the std::ifstream object as a bool to ensure that the stream creation did not fail.
* Use a while loop with getline to write file lines to a string.

![](https://video.udacity-data.com/topher/2019/September/5d72d89a_l3-intro-1/l3-intro-1.png)
