#include "Cast.hpp"
#include <cstddef>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <exception>
#include <iostream>
#include <stdexcept>
using std::cout;


bool Cast::isUniqueMathValueFloat() {
  if (arg == "nanf") return true;
  if (arg == "+inff" || arg == "inff") return true;
  if (arg == "-inff") return true;
  return false;
}

bool Cast::isUniqueMathValueDouble() {
  if (arg == "nan") return true;
  if (arg == "+inf" || arg == "inf") return true;
  if (arg == "-inf") return true;
  return false;
}

Cast::Type Cast::charCheking() {
    if (arg.size() != 1) return Error;
    return Char;
};

Cast::Type Cast::intCheking() {
    if (isUniqueMathValueFloat() == true
      || isUniqueMathValueDouble() == true) {
        charPrintStatus = Impossible;
        intPrintStatus = Impossible;
        return Error;
    }
    try {
        size_t con;
        int base = stoi(arg, &con);
        if ((base > 128 || base < -128) || std::isprint(base) == 0) charPrintStatus = Unprintable;
        if (con != arg.size()) return Error;
    } catch (std::out_of_range &e) {
        charPrintStatus = Impossible;
        intPrintStatus = Impossible;
        return Error;
    } catch (std::invalid_argument &e) {
        return Error;
    }
    return Int;
};

Cast::Type Cast::floatCheking() {
    if (isUniqueMathValueFloat() == true) return Float;
    try {
        size_t con;
        stof(arg, &con);
        if (*arg.rbegin() != 'f'
            || count(arg.begin(), arg.end(), '.') != 1
            || count(arg.begin(), arg.end(), 'f') != 1) {
            return Error;
        }
    } catch (std::out_of_range &e) {
        floatPrintStatus = Impossible;
        return Error;
    } catch (std::invalid_argument &e) {
        return Error;
    }
    return Float;
};

Cast::Type Cast::doubleCheking() {
    if (isUniqueMathValueDouble() == true) return Double;
    try {
        size_t con;
        stod(arg, &con);
        if (con != arg.size()) {
            return Error;
        }
    } catch (std::invalid_argument &e) {
        return Error;
    } catch (std::out_of_range &e) {
        doublePrintStatus = Impossible;
        return Error;
    }
    return Double;
};

void Cast::getType() {
    type = Error;
    if(intCheking() != Error && type == Cast::Error) type = Int;
    if(charCheking() != Error && type == Cast::Error) type = Char;
    if(floatCheking() != Error && type == Cast::Error) type = Float;
    if(doubleCheking() != Error && type == Cast::Error) type = Double;
}

Cast::Cast() : arg(""), type(Error) {};
Cast::~Cast() {};

Cast::Cast(const string argument) : arg(argument) {
    charPrintStatus = Yes;
    floatPrintStatus = Yes;
    intPrintStatus = Yes;
    doublePrintStatus = Yes;
    getType();
    if (type == Error) {
      charPrintStatus = Impossible;
      floatPrintStatus = Impossible;
      intPrintStatus = Impossible;
      doublePrintStatus = Impossible;
    }
};

Cast::Cast(const Cast &src) :  arg(src.arg), type(src.type) {
    charPrintStatus = src.charPrintStatus;
    intPrintStatus = src.charPrintStatus;
    floatPrintStatus = src.charPrintStatus;
    doublePrintStatus = src.charPrintStatus;
};

Cast &Cast::operator=(const Cast &src) {
    type = src.type;
    charPrintStatus = src.charPrintStatus;
    intPrintStatus = src.charPrintStatus;
    floatPrintStatus = src.charPrintStatus;
    doublePrintStatus = src.charPrintStatus;
    return *this;
};

void Cast::getStatus() {
    cout << arg << " is type " << typeToString(type) << '\n';
    cout << "char status " << printToString(charPrintStatus) << '\n';
    cout << "int status " << printToString(intPrintStatus) << '\n';
    cout << "float status " << printToString(floatPrintStatus) << '\n';
    cout << "double status " << printToString(doublePrintStatus) << '\n';
};

string Cast::typeToString(Type tp) {
  switch (tp) {
    case Error:
      return "Error";
    case Char:
      return "char";
    case Int:
      return "int";
    case Float:
      return "float";
    case Double:
      return "double";
  }
  exit(99);
}
string Cast::printToString(Print tp) {
  switch (tp) {
    case Yes:
      return "Valid";
    case Unprintable:
      return "Unprintable";
    case Impossible:
      return "Impossible";
  }
  exit(255);
}

void Cast::resault() {
  if (type == Char) CastAndPrint<char>();
  else if (type == Int) CastAndPrint<int>();
  else if (type == Float) CastAndPrint<float>();
  else if (type == Double) CastAndPrint<double>();
  else if (type == Error) {
    cout << "char: impossible\n";
    cout << "int: impossible\n";
    cout << "float: impossible\n";
    cout << "double: impossible\n";
  }
};
