from django.shortcuts import render

import random

# Create your views here.
def dinner(request):
    foods = ['족발', '햄버거', '치킨', '초밥',]
    pick = random.choice(foods)
    context = {
        'pick': pick,
        'foods': foods,
    }
    return render(request, 'pages/dinner.html', context)

def throw(request):
    return render(request, 'pages/throw.html')

def catch(request):
    message = request.GET.get('message')
    context = {
        'message': message
    }
    return render(request, 'pages/catch.html', context)

def hello(request, name):
    context = {
        'name': name,
    }
    return render(request, 'pages/hello.html', context)