#include <map>
#include "ParserFactory.h"

void ParserFactory::registerWith(IParsable* parser) {
	_container.insert(
		{ parser->parsedObjectName(), parser }
	);
}

IParsable* ParserFactory::create(string type) 
{
	return _container[type]; // Ask container to resolve the needed type
}
