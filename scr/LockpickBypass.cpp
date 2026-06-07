#include <iostream>

class LockpickBypass
{
public:
    static bool CanOpen()
    {
        return true;
    }
};

int main()
{
    std::cout << "No Lockpick Enabled" << std::endl;
    return 0;
}
