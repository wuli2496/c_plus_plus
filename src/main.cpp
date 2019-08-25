//============================================================================
// Name        : cplusplus.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cppunit/Portability.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/CompilerOutputter.h>

using namespace std;

int main()
{
    CPPUNIT_NS::TestResult testResult;
    CPPUNIT_NS::TestResultCollector resultCollector;
    testResult.addListener(&resultCollector);

    CPPUNIT_NS::TestRunner testRunner;
    testRunner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    testRunner.run(testResult);

    CPPUNIT_NS::CompilerOutputter compilerOutputter(&resultCollector, std::cerr);
    compilerOutputter.write();
	return resultCollector.wasSuccessful() ? 0 : 1;
}

