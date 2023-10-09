import re
from django.shortcuts import render, redirect
from .models import Article
from .forms import ArticleForm

# Create your views here.
def index(request):
    # DB에 전체 데이터를 조회
    articles = Article.objects.all()
    context = {
        'articles': articles,
    }
    return render(request, 'articles/index.html', context)

def detail(request, pk):
    # objects 매니저
    article = Article.objects.get(pk=pk)
    context = {
        'article':article,
    }
    return render(request, 'articles/detail.html', context)

# 사용자의 입력을 받아서 게시글을 생성하기 위한 풀
def new(request):
    return render(request, "articles/new.html")

# 사용자의 입력을 받아서 게시글 생성
def create(request):
    form = ArticleForm()
    # 사용자의 입력 데이터를 받아서
    title = request.POST.get('title')
    content = request.POST.get('content')

    # 게시글을 생성한다 -> DB에 게시글 정보를 저장
    # 1. Article 인스턴스를 만들어서 저장
    article = Article()
    article.title = title
    article.content = content
    article.save()

    # # 2.
    # article = Article(title=title, content=content)
    # article.save()

    # # 3. objects 매니저의 create 라는 queryset API...
    # article = Article.objects.create(title=title, content=content)
    # context = {

    # }
    # return render(request, 'article')

    # 모든 게시글에 대한 페이지로 화면 이동해라...!
    # return redirect('article:index')
    # 특정 게시글에 대한 디테일 페이지로 화면을 이동해라...!
    return redirect('articles:detail', article.pk)

# 특정 게시글을 삭제
def delete(request, pk):
    # pk에 해당되는 게시글을 삭제하겠다
    article = Article.objects.get(pk=pk)
    article.delete()
    # 전체 게시글 페이지로 돌아가기
    return redirect('articles:index')

def edit(request, pk):
    article = Article.objects.get(pk=pk)
    context = {
        'article' : article,
    }
    return render(request, 'articles/edit.html', context)

def update(request, pk):
    # 사용자가 전달한 데이터 title, content 정보를 가져온다.
    title = request.POST.get('title')
    content = request.POST.get('content')
    article = Article.objects.get(pk=pk)
    # 제목, 내용 수정...
    article.title = title
    article.content = content
    # 내용을 수정
    article.save()
    # 사용자에게 페이지 정보를 전달...
    # 해당 게시글에 대한 상세페이지
    return redirect('articles:detail', article.pk)