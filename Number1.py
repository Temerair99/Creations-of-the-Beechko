#Number 1
#Andrew Beechko
#Due 1-25-19

class Employee:
    def __init__(self, name, id, department):   #This is the default constructor
        self.name = name
        self.id = id
        self.department = department
    def set_name(self, name):           #This is the structure for a mutator function
        self.name = name
    def set_id(self, id):
        self.id = id
    def set_department(self, department):
        self.department = department
    def get_name(self):                 #This is the structure for an accessor function
        return self.name
    def get_id(self):
        return self.id
    def get_department(self):
        return self.department
    def __str__(self):              #This is what is displayed if you call print on the object
        return self.name + " "+ str(self.id) +" "+ self.department

class ProductionWorker(Employee):       #this is how you do sub classes
    def __init__(self, name, id, department, Snumb, pay):
        Employee.__init__(self, name, id, department)       #Needed for sub class definition
        self.Snumb = Snumb
        self.pay = pay
    def set_Snumb(self, Snumb):
        self.Snumb = Snumb
    def set_pay(self, pay):
        self.pay = pay
    def get_Snumb(self):
        return self.Snumb
    def get_pay(self):
        return self.pay
    def __str__(self):
        if self.Snumb == 1:
            self.Snumb = "Day Shift"
        elif self.Snumb == 2:
            self.Snumb = "Night Shift"
        else:
            self.Snumb = "New Shift"
        return self.name + ","+ str(self.id) +","+ self.department +"," + str(self.Snumb) +"," + self.pay

joe = ProductionWorker("Joe", 23, "Production", 1, "$45")
print (joe)

name = input("Name:")
val = input("ID:")
id = int(val)
position = input("Position:")
val = input("Shift Number:")
shift = int(val)
pay = input("Pay:")

worker = ProductionWorker(name, id, position, shift, pay)
print(worker)


