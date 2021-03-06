#include "token.h"

std::unordered_map<std::string, Token*> Token::tokens;

Token::Token(const std::string& name, unsigned int operationID)
	: name(name), value(0.0), operationID(operationID), ready(false)
{
	if (tokens.insert({ name, this }).second == false)
	{
		throw TokenDefinedException(name);
	}
}