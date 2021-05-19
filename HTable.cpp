#include <iostream>
using namespace std;

#include "HTable.h"

HTable::HTable() {
  *table = nullptr;
}

HTable::HTable(int size) {
  this->size = size;
  *table = new List[size];

  for (int i = 0; i < size; i++) {
    table[i] = new List();
  }
}

int HTable::hash(string str) {
  int sum = 0;

  for (int i = 0; i < str.length(); i++) {
    sum += str[i];
  }

  return sum%size;
}

void HTable::insert(string str) {
  if (table[hash(str)] == nullptr) {
    table[hash(str)] == new List[];
  }

  table[hash(str)]->insert(str);
}

bool HTable::has_key(string str) {
  if (table[hash(str)] == nullptr || table[hash(str)].getHead() == nullptr) {
    return false;
  }
  else {
    Node *temp = table[table[hash(str)]]->getHead();
  }

  if (temp->getData() == str) {
    return true;
  }
  else {
    while (temp->getNext() != nullptr) {
      temp = temp->getNext();

      if (temp->getData() == str) {
        return true;
      }
    }
  }

  return false;
}

void HTable::print() {

}

HTable::~HTable() {
  for (int i = 0; i < size; i++) {
    delete[] table[i];
  }
}
