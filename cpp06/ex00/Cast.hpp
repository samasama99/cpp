#ifndef CAST_H
#define CAST_H
#include <string>
#include <iostream>
#include <iomanip>
using std::string;
using std::cout;
class Cast {
    enum Type {Error, Char, Int, Float, Double};
    enum Print {Yes, Unprintable, Impossible};
    private:
      const string arg;
      Type type; 
      Print charPrintStatus;
      Print intPrintStatus;
      Print floatPrintStatus;
      Print doublePrintStatus;
    private:
      Cast();
      void getType();
    public:
      Cast(const string argument);
      Cast(const Cast &src);
      Cast &operator=(const Cast &src);
      ~Cast();
      Type charCheking();
      Type intCheking();
      Type floatCheking();
      Type doubleCheking();
      void getStatus();
      string typeToString(Type type);
      string printToString(Print type);
      bool isUniqueMathValueFloat();
      bool isUniqueMathValueDouble();

template<typename T>
T getBase() {
  if (type == Char) return (arg[0]);
  if (type == Int) return stoi(arg);
  if (type == Float) return stof(arg);
  if (type == Double) return stod(arg);
  exit(1);
}

template<typename T>
void CastAndPrint() {
    T base = getBase<T>();
    if (charPrintStatus == Yes)
      cout << "char: '" << static_cast<char>(base) << "'\n";
    else if (charPrintStatus == Impossible)
      cout << "char: impossible\n";
    else if (charPrintStatus == Unprintable)
      cout << "char: Non displayable\n";

    if (intPrintStatus == Yes)
      cout << "int: " << static_cast<int>(base) << '\n';
    else if (intPrintStatus == Impossible)
      cout << "int: impossible\n";

    if (floatPrintStatus == Yes)
      cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(base) << "f" << '\n';
    else if (floatPrintStatus == Impossible)
      cout << "flaot: impossible\n";

    if (doublePrintStatus == Yes)
      cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(base) << '\n';
    else if (doublePrintStatus == Impossible)
      cout << "double: impossible\n";
  };
  void resault();
};
#endif
