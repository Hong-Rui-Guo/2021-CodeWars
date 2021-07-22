class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
    {
        std::vector<std::string> result;
        std::vector<int> arr_num,result_num;


        if(arr.size() <= 1)
            return  arr;
        else
        {
            // string to num, for comparison purpose
            for(int i=0;i<arr.size();i++)
            {
                if(arr[i] == "EAST")
                    arr_num.push_back(1);
                else if(arr[i] == "WEST")
                    arr_num.push_back(-1);
                else if(arr[i] == "SOUTH")
                    arr_num.push_back(-2);
                else if(arr[i] == "NORTH")
                    arr_num.push_back(2);                
            }

            // operation in number space
            result_num.push_back(arr_num[0]);

            for (int i=1;i<arr_num.size();i++)
            {
                result_num.push_back(arr_num[i]);
                if( (result_num[result_num.size()-1] + result_num[result_num.size()-2]) == 0)
                {
                    result_num.pop_back();
                    result_num.pop_back();
                }
            }

            // num to string, for topic spec.
            for(int i=0;i<result_num.size();i++)
            {
                if(result_num[i] == 1)
                    result.push_back("EAST");
                else if(result_num[i] == -1)
                    result.push_back("WEST");
                else if(result_num[i] == -2)
                    result.push_back("SOUTH");
                else if(result_num[i] == 2)
                    result.push_back("NORTH");                
            }

            return result;
        }
    }
};
