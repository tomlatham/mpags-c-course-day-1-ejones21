#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  // Convert the command-line arguments into a more easily usable form
  const std::vector<std::string> cmdLineArgs{argv, argv+argc};

  // Options that can be set by the command-line arguments
  bool helpRequested{false};
  bool versionRequested{false};
  std::string input_file{""};
  std::string output_file{""};

  // Add a typedef that assigns another name for the given type for clarity
  typedef std::vector<std::string>::size_type size_type;
  const size_type nCmdLineArgs { cmdLineArgs.size() };

  std::cout<<"Number of arguments = "<<"  " <<nCmdLineArgs<<std::endl;

  // Process command line arguments - ignore zeroth element, as we know this to
  // be the program name and don't need to worry about it
  for (size_type i{1}; i<nCmdLineArgs; ++i)
    {
      if (cmdLineArgs[i]=="-h" || cmdLineArgs[i]=="--help")
	{
	  helpRequested = true;
	}
      else if (cmdLineArgs[i]=="-o")
	{
	  // check whether -o is the last argument
	  if ( i == nCmdLineArgs-1 )
	    {
	      std::cerr << "[error] -o requires a filename argument" << std::endl;
	      // exit main with non-zero return to indicate failure
	      return 1;
	    }
	  else
	    {
	      output_file = cmdLineArgs[++i];
	    }
	}
      else if (cmdLineArgs[i]=="-i")
	{
	  // check whether -i is the last argument
	  if ( i == nCmdLineArgs-1 )
	    {
	      std::cerr << "[error] -i requires a filename argument" << std::endl;
	      // exit main with non-zero return value to indicate failure
	      return 1;
	    }
	  else
	    {
	      input_file = cmdLineArgs[++i];
	    }
	}
      else if (cmdLineArgs[i]=="--version")
	{
	  versionRequested = true;
	}
      else
        {
	  std::cerr << "[error] unknown argument '" << cmdLineArgs[i] << "'\n";
	  // exit main with non-zero return value to indicate failure
	  return 1;
	}
    }

  if ( helpRequested )
    {
      std::cout
        << "Usage: mpags-cipher [-i <file>] [-o <file>]\n\n"
        << "Encrypts/Decrypts input alphanumeric text using classical ciphers\n\n"
        << "Available options:\n\n"
        << "  -h|--help        Print this help message and exit\n\n"
        << "  --version        Print version information\n\n"
        << "  -i FILE          Read text to be processed from FILE\n"
        << "                   Stdin will be used if not supplied\n\n"
        << "  -o FILE          Write processed text to FILE\n"
        << "                   Stdout will be used if not supplied\n\n";
      // exit main with zero return value to indicate success
      return 0;
    }

  if ( versionRequested )
    {
      std::cout << "0.1.0" << std::endl;
      // exit main with zero return value to indicate success
      return 0;
    }

  // Warn that reading from input file not yet implemented
  if ( !input_file.empty() )
    {
      std::cout << "[warning] input from file ('"
                << input_file
                << "') not implemented yet, using standard input\n";
    }

  std::cout<<"Please enter your message and press enter. When finished, press ctrl+D.\n";

  //define inputs and outputs
  std::string output{""};
  char in_char{'x'};

  while(std::cin>>in_char)
    {
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
      if(isalpha(in_char))
	{
	  //make all letters upper case
	  output+=toupper(in_char);
	}
    }

  // Output the transliterated text
  // Warn that writing to output file not yet implemented
  if (!output_file.empty()) {
    std::cout << "[warning] output to file ('"
              << output_file
              << "') not implemented yet, using standard output\n";
  }

  std::cout<<output<<"\n";

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
