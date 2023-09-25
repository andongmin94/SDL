from django.http import HttpResponse
from django.shortcuts import render
import random

def dummy(request):
    return HttpResponse("<h1>여기로 빠져버렸지롱~!</h1>")

# Create your views here.
def index(request):
    return render(request, 'articles/index.html')

def greeting(request):
    return render(request, 'articles/greeting.html', {'name': 'Alice'})

def greeting2(request):
    food = ['apple', 'banana', 'coconut', ]
    info = {
        'name': 'Alice'
    }
    context = {
        'foods': food,
        'info': info,
    }
    return render(request, 'articles/greeting2.html', context)