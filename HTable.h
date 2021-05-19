#pragma once
using namespace std;

#include "Node.h"
#include "List.h"

class HTable {
private:
  int size = 0;
  List *table[];

public:
  HTable();
  HTable(int size);
  int hash(string str);
  void insert(string str);
  bool has_key(string str);
  void print();
  ~HTable();
};
