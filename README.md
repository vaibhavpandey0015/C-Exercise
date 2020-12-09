# Cpp-Exercise
# Practice And Learn Cpp Code from basics to advance   


# Compare the different "Hello World!" Program
      
      #include<iostream>
      
      int main(int arge, const char* argv[])
      {
          std::cout << "Hello World!\n";
          return 0;
      }
      ---------------------------------------------------------------------------------------------------
      ---------------------------------------------------------------------------------------------------
      #include <iostream>
      
      int main()
      {
          std::cout << "Hello World!\n";
          return 0;
      }
      ---------------------------------------------------------------------------------------------------
      ---------------------------------------------------------------------------------------------------
      #include <iostream>
      using namespace std;
      
      int main()
      {
          cout << "Hello World!\n";
          return 0;
      }
      ---------------------------------------------------------------------------------------------------
      ---------------------------------------------------------------------------------------------------
      #include<cstdio>
      using namesapce std;

      int main() {
          puts("Hello World!\n");
          return 0;
      }
      ---------------------------------------------------------------------------------------------------
      ---------------------------------------------------------------------------------------------------

# Note
	1. Bjarne Stroustrue is a Danish Computer scientiest, most notable for the creation and development of the c++ programming language
	2. C++ is release in 1985.
	3. C++ is regarded as a middle-level language, as it comprises a combination of both high-level and low-level language features.
	4. <iostream>, <cstdio> is header files.
	5. using namespace std; tells the compiler to use the std namespace. If we do not write using namespace std; , then we have to write std:: before every standard fuctions from standard libraries.
		ex. std::cout<<"hello";
	6. main() is a single entry point in program.
	7. Semicolon is a statement terminator
