#pragma once
#include <string>
#include <vector>
#include "Symbol.h"
#include "FunctionSymbol.h"


class SymbolTable
{
public:
	SymbolTable(int level, std::string functionName);
	SymbolTable();
	~SymbolTable();
	bool addSymbolToTable(std::string name);
	bool addSymbolToTable(std::string name, boost::any value);
	void updateExistingSymbol(std::string name, boost::any value);
	bool addFunctionSymbol(FunctionSymbol*);
	bool hasFunctionSymbolWithName(std::string);
	FunctionSymbol* getFunctionSymbol(std::string, int);
	bool hasSymbol(std::string);
	void clearSymbolTable();
	boost::any getValue(std::string);
	std::vector<Symbol*>getAllSymbols();
	std::vector<FunctionSymbol *>getAllFunctionSymbols();
private:
	std::vector<Symbol*> symbols;
	std::vector<FunctionSymbol*> fSymbols;
	int level;
	std::string functionName;
};

