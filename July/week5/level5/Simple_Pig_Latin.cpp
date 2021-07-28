std::string pig_it(std::string str)
{
    if(str.size() == 0)
        return str;
    else
    {
        std::string result = "";
        std::vector<std::string> words;
        std::string space_delimiter = " ";
        size_t pos = 0;

        // divide string 
        while((pos = str.find(space_delimiter)) != std::string::npos)
        {
            words.push_back(str.substr(0,pos));
            str.erase(0, pos + space_delimiter.length());
        }

        words.push_back(str);

        std::cout << "(origin string)" << std::endl;

        for (const auto &str : words) {
            std::cout << str << std::endl;
        }        

        // rotate string and + "ay" respectively
        for(size_t i=0;i<words.size();i++)
        {
            // extra : judge whether string is punctuation marks
            if(words[i] != "!" && words[i] != "." && words[i] != "?" && words[i] != ",")
            {
                std::rotate(words[i].begin(), words[i].begin()+1, words[i].end());
                words[i] = words[i] + "ay";
            }
        }

        std::cout << "(rotate and + ay string)" << std::endl;
        for (const auto &str : words) {
            std::cout << str << std::endl;
        }        
        std::cout << "---------------------------------" << std::endl;

        // combine string into result
        for(size_t i=0;i<words.size();i++)
        {
            if(i == words.size()-1)
                result = result + words[i];
            else
                result = result + words[i] + " ";
        }

        return result;
    }
}