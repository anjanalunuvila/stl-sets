#ifndef INFOR_H_INCLUDED
#define INFOR_H_INCLUDED

#include <iostream>
#include <set>

using namespace std;

class Info
{
    public:
        Info(string n, string oN, int dom):
                name(n),
                objName(oN),
                domain(dom)
        {}


        void setName(std::string n) { name = n;}
        void setObjName(std::string n) { objName = n;}
        void setDomain(int dom) { domain = dom; }

        std::string getName() const { return name;}
        std::string getObjName() const { return objName;}
        int getDomain() const { return domain;}

    private:
        std::string name;
        std::string objName;
        int domain;
};

struct InfoCmp {
    bool operator() (const Info &lhs, const Info &rhs) const {
        if((lhs.getName() < rhs.getName()) || (lhs.getObjName() < rhs.getObjName()) || (lhs.getDomain() < rhs.getDomain()) ){
            return true;
            }
        return false;
        }
    };


#endif // INFOR_H_INCLUDED
