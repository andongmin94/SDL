from django import forms
from .models import Restaurant

class RestaurantForm(forms.ModelForm):
    class Meta:
        Model = Restaurant
        fields = "__all__"