#include "Pizza.h"
#include <iostream>

void Pizza::prepare()
{
	std::cout << "Preparing " + name  << std::endl;
	std::cout << "Tossing dough..." << std::endl;
	std::cout << "Adding sauce..." << std::endl;
	std::cout << "Adding toppings: "<< std::endl;
}

void Pizza::bake()
{
	std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut()
{
	std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
	std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

std::string Pizza::getName()
{
	return name;
}

NYStyleCheesePizza::NYStyleCheesePizza()
{
	name = "NY Style Sauce and Cheese Pizza";
	dough = "Thin Crust Dough";
	sauce = "Marinara Sauce";
}

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
}

void ChicagoStyleCheesePizza::cut()
{
	std::cout << "Cutting the pizza into square slices" << std::endl;
}