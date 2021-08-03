class RGBToHex
{
// private:
//     static std::vector<int> RGB;
//     static std::string Hex;
//     static int units_digit, tens_digit;

public:
    // static std::vector<int> RGB;
    // static std::string Hex;
    // static int units_digit, tens_digit;

    static std::string rgb(int r, int g, int b)
    {
        std::vector<int> RGB;
        std::string Hex;
        int units_digit, tens_digit;

        // combine r,g,b into vector
        RGB.push_back(r);
        RGB.push_back(g);
        RGB.push_back(b);

        // calculate r,g,b respectively
        for(int i=0;i<3;i++)
        {
            // check limit
            if(RGB[i]>255)
            {
                Hex = Hex + "FF";
            }
            else if(RGB[i]<0)
            {
                Hex = Hex + "00";
            }
            else
            {
                // calculate tens digit and units digit of pixel value
                tens_digit = RGB[i] / 16;
                units_digit = RGB[i] % 16;

                // transform tens_digit and units digit to hexidecimal
                switch(tens_digit)
                {
                    case 0:
                        Hex = Hex + "0";
                        break;
                    case 1:
                        Hex = Hex + "1";
                        break;
                    case 2:
                        Hex = Hex + "2";
                        break;
                    case 3:
                        Hex = Hex + "3";
                        break;
                    case 4:
                        Hex = Hex + "4";
                        break;
                    case 5:
                        Hex = Hex + "5";
                        break;
                    case 6:
                        Hex = Hex + "6";
                        break;
                    case 7:
                        Hex = Hex + "7";
                        break;
                    case 8:
                        Hex = Hex + "8";
                        break;
                    case 9:
                        Hex = Hex + "9";
                        break;
                    case 10:
                        Hex = Hex + "A";
                        break;
                    case 11:
                        Hex = Hex + "B";
                        break;
                    case 12:
                        Hex = Hex + "C";
                        break;
                    case 13:
                        Hex = Hex + "D";
                        break;
                    case 14:
                        Hex = Hex + "E";
                        break;
                    case 15:
                        Hex = Hex + "F";
                        break;
                }

                switch(units_digit)
                {
                    case 0:
                        Hex = Hex + "0";
                        break;
                    case 1:
                        Hex = Hex + "1";
                        break;
                    case 2:
                        Hex = Hex + "2";
                        break;
                    case 3:
                        Hex = Hex + "3";
                        break;
                    case 4:
                        Hex = Hex + "4";
                        break;
                    case 5:
                        Hex = Hex + "5";
                        break;
                    case 6:
                        Hex = Hex + "6";
                        break;
                    case 7:
                        Hex = Hex + "7";
                        break;
                    case 8:
                        Hex = Hex + "8";
                        break;
                    case 9:
                        Hex = Hex + "9";
                        break;
                    case 10:
                        Hex = Hex + "A";
                        break;
                    case 11:
                        Hex = Hex + "B";
                        break;
                    case 12:
                        Hex = Hex + "C";
                        break;
                    case 13:
                        Hex = Hex + "D";
                        break;
                    case 14:
                        Hex = Hex + "E";
                        break;
                    case 15:
                        Hex = Hex + "F";
                        break;
                }
            }
        }

        return Hex;
    }
};


/******************master method*******************/
/*
class RGBToHex
{
  public:
  static std::string decToHex(int input) {
    std::string output = "00";
    std::string chars_for_hex = "0123456789ABCDEF";

    if(input < 0) input=0;
    if(input > 255) input = 255;

    output[1] = chars_for_hex[(input % 16)];
    input >>= 4; 
    output[0] = chars_for_hex[(input % 16)];

  return output;
}

  static std::string rgb(int r, int g, int b) {
    return decToHex(r) + decToHex(g) + decToHex(b);
  }
};
*/
