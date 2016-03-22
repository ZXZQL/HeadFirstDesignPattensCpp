#pragma once

namespace DesignPatterns_Observer
{
	/*
	 *布告板显示接口
	 */
	class IDisplayElement
	{
	public:
		IDisplayElement(){}
		virtual ~IDisplayElement(){}

	public:
		virtual void display() = 0;
	};
}