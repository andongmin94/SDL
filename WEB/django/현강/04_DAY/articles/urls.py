from django.urls import path
from . import views

app_name = "articles"
urlpatterns = [
    path('', views.index, name="index"), # 전체 게시글 조회
    path('<int:pk>/delete/', views.delete, name="delete"), # 해당 게시글 삭제
    path('new/', views.make, name="make"), # 게시글 폼 생성
    path('create/', views.create, name="create"), # 데이터로 게시글을 생성
]