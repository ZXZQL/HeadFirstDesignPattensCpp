#pragma once

#include "string"

/*
装饰者和装饰对象的基类
子类必须实现cost方法
*/
namespace DesignPatterns_Decorator
{
	using std::string;

	class CBeverage
	{
	protected:
		string description;

	public:
		CBeverage()
		{
			description = "unknown Beverage";
		}
		virtual ~CBeverage()	{}

	public:
		virtual double cost() = 0;

		virtual string getDescription()
		{
			return description;
		}
	};
}