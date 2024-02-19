void stars(unsigned int& number)
  if (number == 1)
    {
      std::cout << "*" << std::endl;
    }
  else
    {
    std::setfill("*") << std::setw(number) << "*" << std::endl;
    stars(number-1);
    }
