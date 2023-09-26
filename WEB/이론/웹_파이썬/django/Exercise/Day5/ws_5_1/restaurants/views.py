from django.shortcuts import render
from .models import Restaurant
from .forms import RestaurantForm

# Create your views here.
def index(request):
    restaurants = Restaurant.objects.all()
    context = {
        'restaurants' : restaurants,
    }
    return render(request, 'restaurants/index.html', context)

def new(request):
    form = RestaurantForm()
    context = {
        'form': form,
    }
    return render(request, 'restaurantsForm/new.html', context)

def create(request):
    form = RestaurantForm(request.POST)
    if form.is_valid():
        form.save()
        return redirect("retaurants:index")
    context = {
        'form': form,
    }
    return render(request, 'restaurantsForm/new.html', context)