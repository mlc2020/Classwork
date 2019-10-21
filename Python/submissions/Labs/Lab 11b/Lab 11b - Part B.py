# By submitting this assignment, all team members agree to the following:
#  “Aggies do not lie, cheat, or steal, or tolerate those who do”
#  “I have not given or received any unauthorized aid on this assignment”
#
# Names:      	Mihir Chadaga
# Section:    	102-504
# Assignment: 	Lab 11b - Part B
# Date:       	11 19 2018

factory_name_input = input("Please input the names of the factories separated by spaces").split(" ")
factory_cost_input = input("Please input the costs of the factories separated by spaces").split(" ")
factory_revenue_input = input("Please input the revenues of the factories separated by spaces").split(" ")


def return_low(factory_name, factory_cost, factory_revenue):
    factory_p = []
    for i in range(len(factory_cost)):
        factory_p.append(float(factory_revenue[i])-float(factory_cost[i]))
    temp = factory_p[0]
    count = 0
    for k in range(len(factory_p)):
        if temp > factory_p[k]:
            temp = factory_p[k]
            count = k
    return factory_name[count], factory_p[count]


factory_P = return_low(factory_name_input, factory_cost_input, factory_revenue_input)
print(factory_P)
