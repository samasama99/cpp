#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
  std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name, int hp, int ep, int att)
    : _name(name), _hitPoint(hp), _energyPoint(ep), _attackDamage(att) {
  std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
  std::cout << "ClapTrap constructor called\n";
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap destructor called\n"; }

ClapTrap::ClapTrap(const ClapTrap &src) {
  _name = src._name;
  _hitPoint = src._hitPoint;
  _energyPoint = src._energyPoint;
  _attackDamage = src._attackDamage;
  std::cout << "Copy constructor called\n";
}

void ClapTrap::operator=(const ClapTrap &rh) {
  _name = rh._name;
  _hitPoint = rh._hitPoint;
  _energyPoint = rh._energyPoint;
  _attackDamage = rh._attackDamage;
  std::cout << "Copy assignment operator called\n";
}

void ClapTrap::attack(const std::string &target) {
  if (_energyPoint == 0) {
    std::cout << _name << " is out of energy points\n";
    return;
  }
  std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << _name << " took " << amount << " damage\n";
  _hitPoint -= amount;
  --_energyPoint;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_energyPoint == 0) {
    std::cout << _name << " is out of energy points\n";
    return;
  }
  std::cout << _name << " recovered " << amount << " of hit points\n";
  _hitPoint += amount;
  --_energyPoint;
}

std::string ClapTrap::get_name() { return _name; }
