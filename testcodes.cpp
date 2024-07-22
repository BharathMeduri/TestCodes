// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <string>
/*http://2a00-fbc-1150-14aa-b406-4002-0-749a.ns-mv-pcf-l001splct10600-met.pod.cluster.local:3000
 http://pcfsm:3000*/
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    std::string host = "http://::";
    std::string fullHost = (std::string(host)).substr(strlen("http://"));
    std::cout << "fullhost is  : " <<fullHost.c_str() << std::endl ;
    std::string destHost = fullHost.substr(0, fullHost.find_first_of(":"));
    std::cout << "destHost is  : " << destHost.c_str() << std::endl ;
    int destPort = std::stoi(fullHost.substr(fullHost.find_first_of(":") + 1));
    std::cout << "port is  : " << destPort << std::endl ;
    return 0;
}



#include <iostream>
#include <memory>
using namespace std;

void Hi_Func(shared_ptr<int> ptr1)
{
    
    //returns a pointer to the managed object
    cout << "ptr1.get1() = "<< ptr1.get() << endl;
    //print the reference count
    cout << "ptr1.use_count1() = " << ptr1.use_count() << endl;

}
int main()
{
    /*
    Create an shared ptr
    object that store the pointer to
    the int object
    */
    shared_ptr<int> ptr1(new int);
    Hi_Func(ptr1);
    
    //print the reference count and manged object
    cout << "ptr1.get() = "<< ptr1.get() << endl;
    //cout << "ptr2.get() = "<< ptr2.get() << endl;
    cout << "ptr1.use_count() = " << ptr1.use_count() << endl;
    //cout << "ptr2.use_count() = " << ptr2.use_count() << endl;
    return 0;
}

Shared Pointer:
==============
#include <iostream>
#include <memory>
using namespace std;
class Test
{
public:
    ~Test()
    {
        cout << "Test destroyed." << endl;
    }
};

void Hi_classp(std::shared_ptr<Test> p)
{
    //returns a pointer to the managed object
    cout << "ptr1.get1() = "<< p.get() << endl;
    //print the reference count
    cout << "ptr1.use_count1() = " << p.use_count() << endl;
}
int main()
{
    std::shared_ptr<Test> p = std::make_shared<Test>();
    
    Hi_classp(p);
    
    
    //returns a pointer to the managed object
    cout << "ptr.get1() = "<< p.get() << endl;
    //print the reference count
    cout << "ptr.use_count1() = " << p.use_count() << endl;

    //cout << "p.reset()...\n";
   //p.reset();
    //cout << "q.reset()...\n";
    //q.reset();
    cout << "end of the code...\n";
    return 0;
}
