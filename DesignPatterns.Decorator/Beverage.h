#pragma once

#include "string"

/*
װ���ߺ�װ�ζ���Ļ���
�������ʵ��cost����
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