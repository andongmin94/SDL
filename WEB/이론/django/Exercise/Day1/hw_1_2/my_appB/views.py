from django.http import HttpResponse
from django.shortcuts import render

# Create your views here.
def hello2(request):
    return render(request, 'my_appB/index.html')

def greet(request):
    return render(request, 'my_appB/index2.html')