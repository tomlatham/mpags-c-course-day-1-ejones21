#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[])
{
  const std::vector<std::string> cmdLineArgs{argv, argv+argc};

  std::cout<<"Number of arguments = "<<"  " <<argc<<std::endl;
  for (int i{0}; i<cmdLineArgs.size();++i)
    {
      if (cmdLineArgs[i]=="-h")
	{ std::cout<<"You have asked for help. The following could help...Some help text"<<std::endl;
	}
      else if (cmdLineArgs[i]=="--help")
	{ std::cout<<"Some help text"<<std::endl;
	}
      else if (cmdLineArgs[i]=="-o")
	{ std::string output_file {"output file"};
	  output_file = cmdLineArgs[++i];
	  std::cout<<"The output file is  "<<output_file<<"\n";
	}
      else if (cmdLineArgs[i]=="-i")
	{ std::string input_file {"input file"};
	  input_file = cmdLineArgs[++i];
	  std::cout<<"The input file is  "<<input_file<<"\n";
	}
      else if (cmdLineArgs[i]=="--version")
	{ std::cout<<"This is C++11\n";
	}
    }

  std::cout<<"Please enter your message and press enter. When finished, press ctrl+D.\n";
  char in_char{'x'};

  while(std::cin>>in_char)
    {
      //define inputs and outputs
      std::string output{""};

      //make all numbers into words      
      switch (in_char)
	{
	case '0':
	  output+="ZERO";
        break;
	
	case '1':
	  output+="ONE";
	  break;

	case '2':
	  output+="TWO";
	break;
	
	case '3':
	  output+="THREE";
	break;
	  
	case '4':
	  output+="FOUR";
	break;

	case '5':
	  output+="FIVE";
	break;

	case '6':
	  output+="SIX";
	break;

	case '7':
	  output+="SEVEN";
	break;

	case '8':
	  output+="EIGHT";
	break;

	case '9':
	  output+="NINE";
	break;

	default: 
	break;
	}

      //ignore non-alpha characters
      if(isalpha(in_char)!=0)
	{
	  //make all letters upper case
	  if(islower(in_char))
	    {
	      output+=toupper(in_char);
	    }
	}
      std::cout<<output<<"\n";
    }
  return 0;
} 


  // This is a comment
  /* This is a
     multiline comment */

  /* std::cout<<"Hello World!\n";

  int a{10};
  a=5;
  std::cout<<a<<std::endl;
  
  double b{2.0};
  b=4.9;
  std::cout<<b<<std::endl;

  std::string msg{"Hello"};
  std::cout<<msg<<"\n";

  int c{9};
  c=c/a;
  std::cout<<c<<std::endl;

  char letter{msg[2]};
  std::cout<<letter<<"\n"; 
 
  std::vector<double> vec={1.2,3.4,5.6};
  std::cout<<vec.size()<<std::endl;
  vec.push_back(7.8);
  vec.push_back(9.1);
  std::cout<<vec.size()<<std::endl;
  vec.pop_back();
  std::cout<<vec.size()<<std::endl;
  for (size_t i{0}; i<vec.size();i++)
    {
      std::cout<<"Index:"<<i<<"  "<<vec[i]<<std::endl;
      } */
