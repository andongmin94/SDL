from django.urls import path
from . import views

app_name = 'todos'
urlpatterns = [
    path('', views.index, name='index'),
    path('login/', views.detail, name='login'),
    path('create/', views.create, name='create'),
    path('<int:pk>/', views.detail, name='detail'),
]
