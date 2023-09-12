from django.http import HttpResponse
from django.shortcuts import render

# Create your views here.
def hello1(request):
    return render(request, 'my_appA/index.html')