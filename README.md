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

### Summary
* The A* algorithm finds a path from the start node to the end node by checking for open neighbors of the current node, computing a heuristic for each of the neighbors, and adding those neighbors to the list of open nodes to explore next. The next node to explore is the one with the lowest total cost + heuristic (g + h). This process is repeated until the end is found, as long as there are still open nodes to explore.

![](https://video.udacity-data.com/topher/2019/August/5d4a19a8_a-star-code-structure/a-star-code-structure.png)

![](https://video.udacity-data.com/topher/2019/September/5d72dd2d_l4-intro/l4-intro.png)

![](https://video.udacity-data.com/topher/2019/September/5d78129f_8e0935d2-6391-4e89-84fd-7a424a090cff/8e0935d2-6391-4e89-84fd-7a424a090cff.png)

* [GDB Cheat Sheet](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf)

### Syntax of Calloc and Malloc
* pointer_name = (cast-type*) malloc(size);
* pointer_name = (cast-type*) calloc(num_elems, size_elem);

