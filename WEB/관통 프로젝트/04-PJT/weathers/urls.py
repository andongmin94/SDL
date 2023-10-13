from django.urls import path
from . import views

urlpatterns = [
    path('', views.index),
    path('problem1/', views.problem1, name='1'),
    path('problem2/', views.problem2, name='2'),
    path('problem3/', views.problem3, name='3'),
    path('problem4/', views.problem4, name='4'),
]
