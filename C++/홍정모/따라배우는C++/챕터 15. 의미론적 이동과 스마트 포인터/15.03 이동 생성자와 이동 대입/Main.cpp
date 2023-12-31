﻿#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource()
{
    AutoPtr<Resource> res(new Resource(10000000));

    return res;
}

using namespace std;

int main()
{
    streambuf* orig_buf = cout.rdbuf();
    //cout.rdbuf(NULL); // discounnect cout from buffer

    //Timer timer;

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }

    cout.rdbuf(orig_buf);
    //cout << Timer.elapsed() << endl;
}
