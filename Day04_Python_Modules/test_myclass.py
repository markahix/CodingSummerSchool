class Person:
    def __init__(self,name,age,university):
        self.name = name
        self.age = age
        self.uni = university

def test_Person_PASS():
    test = Person("Mark",37,"Wayne State University")
    assert test.name == "Mark"
    assert test.age == 37
    assert test.uni == "Wayne State University"

def test_Person_FAIL():
    test = Person("Mark",37,"Wayne State University")
    assert test.name == "Mark"
    assert test.age == 37
    assert test.uni == "Wayne State Universe" ### Notice how this is not correct.
