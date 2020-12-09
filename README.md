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
     
      #include <iostream>
      
      int main()
      {
          std::cout << "Hello World!\n";
          return 0;
      }
 ---------------------------------------------------------------------------------------------------
     
      #include <iostream>
      using namespace std;
      
      int main()
      {
          cout << "Hello World!\n";
          return 0;
      }
 ---------------------------------------------------------------------------------------------------
     
      #include<cstdio>
      using namesapce std;

      int main() {
          puts("Hello World!\n");
          return 0;
      }
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
	
# Note 2 (return keyword)

	After return keyword code does not run.
    return is at last.
    It resolves code collision.
    
# Note 3 (Primitive Built-in Data-Types) 

       Type                 |     Keyword
 	--------------------------------------------------------------------------              
     Boolean                |   bool
     Character              |   char
     Integer                |   int
     Floating point         |   float
     Double Floating Point  |   double
     Valueless              |   void
     -------------------------------------------------------------------------
       
    Basic types can be modified using one or more of these type modifiers:
    --->signed
    --->unsigned
    --->short
    --->long
---------------------------------------------------------------------------------------------------------------------
    
    char---|
    	   |--> unsigned char 	1 byte size and range is 0 to 255
    	   |--> signed char 	1 byte size and range is -127 to 127
    int -----|
             |--> unsigned int ------------------ 4 bytes size and range is 0 to 4294967295
             |--> signed int -------------------- 4 bytes size and range is -2147483648 to 2147483647
             |
             |--> short int --------------------- 2 bytes size and range is -32768 to 32767
             |--> unsigned short in-------------- 2 bytes size and range is 0 to 65,535
             |--> signed short int -------------- 2 bytes size and range is -32768 to 32767
             |
             |--> long int ---------------------- 8 bytes size and range is -2,147,483,648 to 2,147,483,647
             |--> unsigned long int ------------- 8 bytes size and range is 0 to 4,294,967,295
             |--> signed long int --------------- 8 bytes size and range is -2,147,483,648 to 2,147,483,647
             |
             |--> long long int ----------------- 8 bytes size and range is -(2^63) to (2^63)-1
             |--> unsigned long long int -------- 8 bytes size and range is 0 to 18,446,744,073,709,551,615

    float --------> 4 bytes size	
    double -------> 8 bytes size	
    long double --> 12 bytes size
