from . import views
from django.urls import path


app_name = 'trends'
urlpatterns = [
    path('', views.index, name='index'),
    path('keyword/', views.keyword, name='keyword'),
    path('keyword/<int:pk>/', views.keyword_detail, name='keyword_detail'),
    path('crawling/', views.crawling, name='crawling'),
    path('crawling/histogram/', views.crawling_histogram, name='crawling_histogram'),
    path('crawling/advanced/', views.crawling_advanced, name='crawling_advanced'), 
]
