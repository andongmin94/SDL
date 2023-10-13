from django.shortcuts import render, redirect
from .models import Keyword, Trend
from .forms import KeywordForm

from bs4 import BeautifulSoup
from selenium import webdriver
import matplotlib.pyplot as plt
from io import BytesIO
import base64

def find_keyword(keyword):
    url = f'https://www.google.com/search?q={keyword}'

    driver = webdriver.Chrome()
    driver.get(url)

    html = driver.page_source
    soup = BeautifulSoup(html, "html.parser")

    result_stats = soup.select_one("div#result-stats")
    result = result_stats.text
    
    print(result)
    return result

def keyword(request):
    keywords = Keyword.objects.all()
    
    if request.method == 'POST':
        form = KeywordForm(request.POST)
        
        if form.is_valid():
            form.save()
            return redirect('trends:keyword')
    else:
        form = KeywordForm()
    
    context = {
        'form': form,
        'keywords': keywords,
    }
    
    return render(request, 'trends/keyword.html', context)


def keyword_detail(request, pk):
    keyword = Keyword.objects.get(pk=pk)
    keyword.delete()    
    return redirect('trends:keyword')


def crawling(request):
    keywords = Keyword.objects.all()
    trends = Trend.objects.all()
    
    trend_names = []
    
    for trend in trends:
        trend_names.append(trend.name)
    
    for keyword in keywords:
        result = ''
        temp = find_keyword(keyword.name).split(' ')[2]
        
        for idx in temp:
            if idx.isdigit():
                result += idx
        
        result = int(result)
        
        if keyword.name not in trend_names:
            Trend.objects.create(name=keyword.name, result=result)
        else:
            trend = Trend.objects.get(name=keyword.name)
            trend.result = result
            trend.save()
            
    trends = Trend.objects.all()
    
    context = {
        'trends': trends,
    }
    
    return render(request, 'trends/crawling.html', context)


def crawling_histogram(request):
    trends = Trend.objects.all()
    
    x = []
    y = []
    
    for trend in trends:
        x.append(trend.name)
        y.append(trend.result)
    
    plt.clf()

    plt.bar(x, y)
    plt.title('Technology Trend Analysis')
    plt.ylabel('y')
    plt.grid(True)

    buffer = BytesIO()
    plt.savefig(buffer, format='png')
    image_base64 = base64.b64encode(buffer.getvalue()).decode('utf-8').replace('\n', '')
    buffer.close()
    
    context = {
        'chart_image': f'data:image/png;base64, {image_base64}',
    }
    
    return render(request, 'trends/crawling_histogram.html', context)


def crawling_advanced(request):
    context = {
        'keyword': '키워드',
    }
    return render(request, 'trends/advanced.html', context)

