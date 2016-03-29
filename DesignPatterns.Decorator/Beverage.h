#pragma once

#include "string"

namespace DesignPatterns_Decorator
{
	using std::string;

	class CBeverage
	{
	protected:
		string description = "unknown Beverage";

	public:
		CBeverage(){}
		virtual ~CBeverage()	{}

	public:
		virtual double cost() = 0;

		string getDescription()
		{
			return description;
		}
	};
}