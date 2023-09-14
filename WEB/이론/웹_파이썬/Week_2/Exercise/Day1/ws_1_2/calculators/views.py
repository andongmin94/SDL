from django.shortcuts import render

# Create your views here.
def calculation(request):
    return render(request, 'calculators/calculators.html')

def result(request):
    num1 = int(request.GET.get('num1'))
    num2 = int(request.GET.get('num2'))
    num_add = num1+num2
    mul = num1 * num2
    sub = num1 - num2
    if num2 == 0:
        div = 'error'
    else:
        div = num1/ num2
    context = {
        'num1' : num1,
        'num2' : num2,
        'num_add' : num_add,
        'mul' : mul,
        'sub' : sub,
        'div' : div
    }
    return render(request, 'calculators/result.html', context)