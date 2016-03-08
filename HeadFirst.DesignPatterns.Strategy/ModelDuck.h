#pragma once
#include "Duck.h"
#include "iostream"
namespace DesignPattern
{
	/*
	 *分类：类
	 *名称：模型鸭子
	 **/
	class CModelDuck : public CDuck
	{
	public:
		CModelDuck();
		virtual ~CModelDuck();

	public:
		void display();
	};
}