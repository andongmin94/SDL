"""
URL configuration for my_pjt project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/4.2/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""

# 1. 현재 폴더에서 django 프로젝트(my_pjt)와 앱(my_app)를 만들고 서버를 실행하기 위한 bash 명령어를 주석으로 작성하시오. 
# python -m venv venv
# source venv/Script/activate
# pip install django
# django-admin startproject my_pjt01
# python manage.py startapp my_appA
# python manage.py startapp my_appB
# python manage.py runserver

# 2. http://127.0.0.1:8000/hello로 받은 요청을 통해 my_app 앱의 views.py에 있는 hello 함수를 실행시킬 수 있도록 아래 urls.py를 작성하시오 


from django.contrib import admin
from django.urls import path
from my_appA import views as viewsA
from my_appB import views as viewsB

urlpatterns = [
    path('admin/', admin.site.urls),
    path('helloA/', viewsA.hello1),
    path('helloB/', viewsB.hello2),
    path('greeting', viewsB.greet)
]