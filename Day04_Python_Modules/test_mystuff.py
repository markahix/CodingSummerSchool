def cool_function(x,y):
    """We expect this function to return the numerical product of two numbers x and y."""
    return x*y

def test_cool_function_pass1():
    assert cool_function(3,4) == 12
def test_cool_function_pass2():
    assert cool_function(2,4) == 8
def test_cool_function_pass3():
    assert cool_function(4,4) == 16
def test_cool_function_fail1():
    assert cool_function(3,4) == 11
def test_cool_function_pass4():
    assert cool_function(5,20) == 100
def test_cool_function_pass5():
    assert cool_function(3,5) == 15

