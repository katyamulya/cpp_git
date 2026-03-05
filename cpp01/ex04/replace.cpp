#include "replace.hpp"

/*const std::string& ifreplace(const std::string line, const std::string& s1, const std::string& s2)
{
    if(line.compare(s1) == 0)
        return s2;
    return line;
}*/

std::string replaceS(std::string line, const std::string& s1, const std::string& s2) {
    if (s1.empty())
        return line;

    std::string result;
    size_t start_pos = 0;
    size_t found_pos;

    // Build the string by finding s1 and jumping over it
    //"I like apples and apples.", s1 = "apples"
    while ((found_pos = line.find(s1, start_pos)) != std::string::npos) {
        //1: found_pos = 7 -> substr(0, 7 - 0) -> "I like "
        //2: found_pos = 18 -> substr(13, 18 - 13) -> " and "
        //3: found_pos = npos -> not found
        result += line.substr(start_pos, found_pos - start_pos);
        
        // 2. Append the replacement string (s2)
        result += s2;
        
        // 3. Move the cursor forward past the found occurrence of s1
        //1: start_pos = 7 + 6 = 13 (from " and ...")
        //2: start_pos = 18 + 6 = 24 (from ".")
        start_pos = found_pos + s1.length();
    }
    //+ substr(24, end of line) -> + "."
    result += line.substr(start_pos);
    return result;
}

void replace(const std::string& filename, const std::string& s1, const std::string& s2)
{
    // attach an input stream to the wanted file
    std::ifstream inputstream(filename);
    std::string line;
    // check stream status
    if (!inputstream.is_open()) 
    {
        std::cerr << "Error: Can't open input file " << filename << std::endl;
        //inputstream.close(); // inputstream closes automatically via RAII
        return ;
    }
    //  create an ofstream object and open it
    std::ofstream outputstream(filename + ".replace");
    if(!outputstream.is_open())
    {
        std::cerr << "Error: Can't create output file " << filename << ".replace" << std::endl;
        //inputstream.close();  //// in/out/putstream closes automatically via RAII
        //outputstream.close();
        return ;
    }

    while (std::getline(inputstream, line))
	{
		//std::getline (inputstream, line);
		outputstream << replaceS(line, s1, s2);
        // Only append newline if it's not the last line's EOF
		if (!inputstream.eof ())
			outputstream << std::endl;
	}
    //inputstream.close();
   // outputstream.close();
}

 /*
    size_t position = line.find(s1, start_pos);

    - s1: The substring you are searching for.
    - start_pos (optional): The index where the search should 
    begin (defaults to 0 if not provided)

    If found: It returns a number between 0 and the length of 
    the string minus one.
    If NOT found: It returns a special constant called 
    std::string::npos.
    Note: npos is technically the largest possible value for 
    an unsigned integer (effectively -1), which signals that 
    the end of the string was reached without a match

    Examlple:
    std::string text = "I like apples and apples.";
    size_t pos = text.find("apples"); // Returns 7
    // Look for "apples" but start searching AFTER the first one 
    (starting at index 8):
    size_t secondPos = text.find("apples", 8); // Returns 18
        */