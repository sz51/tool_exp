#ifndef SYN_H
#define SYN_H
#include "Common.h"
#include "smtbdd2bdd.h"
using namespace std;

class syn
{
    public:
        syn(string filename, string partfile);
        bool realizablity();
        virtual ~syn();
    protected:
    private:
    Cudd mgr;
    smtbdd2bdd T;
    set<int> W;
    set<int> S;
    int cur = 0;
    bool fixpoint();
    BDD tran2bdd(vector<int >item);
    //vector<BDD> W;
    //vector<BDD> Wprime;
    //string state2bin(int n);
    void initializer();
    //BDD state2bdd(int s);
    //int* state2bit(int n);
    //int** outindex();
    void dumpdot(BDD &b, string filename);
    void print_set(set<int> S);
    //BDD prime(BDD orign);
    //BDD univsyn();
    //BDD existsyn();
};

#endif // SYN_H
