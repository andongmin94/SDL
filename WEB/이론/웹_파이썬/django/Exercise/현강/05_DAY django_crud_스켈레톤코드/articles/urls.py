from django.urls import path
from . import views

app_name = 'articles'
urlpatterns = [
    # 전체 게시글 조회 : '' <-> index
    path('', views.index, name='index'),
    # 상세 게시글 조회 : '<int:pk>/'
    path('<int:pk>/', views.detail, name='detail'),
    path('new/', views.new, name="new"),
    path('create/', views.create, name="create"),
    path('<int:pk>/delete/', views.delete, name='delete'),
    path('<int:pk>/edit/', views.edit, name='edit'),
    path('<int:pk>/update/', views.update, name='update'),
]
'''
'R'ead (조회)    
- 전체 게시글 조회 :  <-> index
- 상세 게시글 조회 :  <int:pk> / <-> detail


'C'reate (생성)
- 게시글 생성에 필요한 폼을 사용자에게 제공 : new/ <-> new
- 사용자로부터 정보를 받아 게시글 생성 :  create/ <-> create

'U;pdate (갱신)
- 특정 게시글 수정에 필요한 폼을 사용자에게 제공 : <int:pk>/ <-> edit
- 사용자로부터 정보를 받아 게시글 수정 : <int:pk>/update/ <-> update

'D'elete (삭제)
- 사용자로부터 삭제 요청을 받아 게시글을 삭제 : <int:pk>/delete/ <-> delete
'''