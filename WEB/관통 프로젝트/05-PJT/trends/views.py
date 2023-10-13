from django.shortcuts import render, redirect
from .models import *

def index(request):
    return render(request, 'trends/index.html')


def keyword(request):
    keywords = Keyword.objects.all()
    context = {
        'keyword': keyword,
        'keywords': keywords,
    }
    return render(request, 'trends/keyword.html', context)


def keyword_detail(request):
    keyword = Keyword.objects.create(name=request.GET.get('keyword'))
    keywords = Keyword.objects.all()
    context = {
        'keyword': keyword,
        'keywords': keywords,
    }
    return redirect('trends:keyword', context)


def crawling(request):
    trend = Trend.objects.create(keyword=Keyword.objects.get(id=request.GET.get('keyword_id')))
    trends = Trend.objects.filter(keyword=trend.keyword)
    context = {
        'trends': trends,
        'trend' : trend,
    }
    return render(request, 'trends/crawling.html', context)


def crawling_histogram(request):
    context = {
        'keyword': '키워드',
    }
    return render(request, 'trends/crawling_histogram.html', context)


def crawling_advanced(request):
    context = {
        'keyword': '키워드',
    }
    return render(request, 'trends/advanced.html', context)

