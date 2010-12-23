/*
 *  BSPReader.cpp
 *  OpenSceneGraph
 *
 *  Created by Thomas Dickerson on 9/28/10.]
 *
 */

#include "BSPReader.h"

using namespace bsp;
using namespace osg;
using namespace osgDB;

BSPReader::BSPReader()
{
    // Start with no root node
    root_node = NULL;
}


bool BSPReader::readFile(const std::string& file,
			  const osgDB::ReaderWriter::Options*){
	return false;
}