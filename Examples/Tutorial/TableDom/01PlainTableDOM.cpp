
#include <OSGConfig.h>


#include <OSGTableFileHandler.h>

#include <OSGPlainTableDOM.h>

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// Initialize WIN32 & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {
        //Load Document
	    PlainTableDOMRefPtr TheDocument;
	    TheDocument = dynamic_pointer_cast<PlainTableDOM>(TableFileHandler::the()->read(BoostPath("C:\\Meta!Blast\\OpenSGToolBox\\Examples\\Tutorial\\TableDom\\Data\\Sample.csv")));
		TheDocument->print();
		TableFileHandler::the()->write(TheDocument,"C:\\Meta!Blast\\OpenSGToolBox\\Examples\\Tutorial\\TableDom\\Data\\SampleOutput.csv");
    }

	getchar();
	getchar();

    osgExit();
    return 0;
}
