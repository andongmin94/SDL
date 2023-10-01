from django.shortcuts import render, redirect
from .models import Article

# Create your views here.
def index(request):
    articles = Article.objects.all() # 게시글 정보를 모두 가져온다
    context = {
        'articles' : articles,
    }
    return render(request, "articles/index.html", context)

# Delete : 해당 게시글 삭제
def delete(request, pk):
    # 1. pk를 가지고 있는 게시글 조회
    article = Article.objects.get(pk=pk)
    # 2. 게시글 삭제
    article.delete()

    return redirect("articles:index")

def make(request):
    return render(request, "articles/new.html")

# 데이터로 게시글을 생성
def create(request):
    title = request.GET.get("title")
    content = request.GET.get("content")
    article = Article()
    article.title = title
    article.content = content
    article.save()
    return redirect("articles:index")