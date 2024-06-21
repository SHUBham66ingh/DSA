class student
{
    construceter(id, name)
    {
        this.id=id;
        this.name= name;

    }
    details()
    {
        console.log(this.id=" " + this.name);
    }
}

var stud1 = new student(201, "ram");
student.display();

