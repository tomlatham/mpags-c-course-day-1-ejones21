#include <iostream>
#include <string>
int main()
{
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

  return 0; */
