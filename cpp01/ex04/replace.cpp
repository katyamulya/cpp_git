#include "replace.hpp"

const std::string& ifreplace(const std::string& line, const std::string& s1, const std::string& s2)
{
    if(line.compare(s1) == 0)
        return s2;
    else
        return line;
}

void replace(const std::string& filename, const std::string& s1, const std::string& s2)
{
    // attach an input stream to the wanted file
    std::ifstream inputstream(filename);
    // check stream status
    if (!inputstream.is_open()) 
    {
        std::cerr << "Error: Can't open input file " << filename << std::endl;
        inputstream.close();
        return ;
    }
    //  create an ofstream object and open it
    std::ofstream outputstream(filename + ".replace");
    if(!outputstream.is_open())
    {
        std::cerr << "Error: Can't create output file " << filename << ".replace" << std::endl;
        inputstream.close();
        outputstream.close();
        return ;
    }

    while (inputstream.good ())
	{
        std::string line;
		std::getline (inputstream, line);
		outputstream << ifreplace(line, s1, s2);
		if (!inputstream.eof ())
			outputstream << std::endl;
	}
    inputstream.close();
    outputstream.close();
}