#ifndef INFOR_H_INCLUDED
#define INFOR_H_INCLUDED

#include <iostream>
#include <set>
#include <tuple>
#include <functional>

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
        if((lhs.getName() < rhs.getName())
           || ( (lhs.getName() == rhs.getName()) && (lhs.getObjName() < rhs.getObjName()) )
           || ( (lhs.getName() == rhs.getName()) && (lhs.getObjName() == rhs.getObjName()) && (lhs.getDomain() < rhs.getDomain()) )){
            return true;
            }
        return false;
        }
    };

    struct InfoCmp1 {
    bool operator() (const Info &lhs, const Info &rhs) const {
        if(lhs.getName() < rhs.getName())
            return true;
        if(rhs.getName() < lhs.getName())
            return false;
        if(lhs.getObjName() < rhs.getObjName())
            return true;
        if(rhs.getObjName() < lhs.getObjName())
            return false;
        return lhs.getDomain() < rhs.getDomain();
        }
    };

    struct InfoCmp2 {
        bool operator() (const Info &lhs, const Info &rhs) const {
            return std::make_tuple(lhs.getName(), lhs.getObjName(), lhs.getDomain()) < std::make_tuple(rhs.getName(), rhs.getObjName(), rhs.getDomain());
        }
    };


#endif // INFOR_H_INCLUDED
