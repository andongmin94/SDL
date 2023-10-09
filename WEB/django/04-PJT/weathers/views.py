from django.shortcuts import render
import matplotlib.pyplot as plt
from io import BytesIO
import base64
import pandas as pd
csv_path = 'weathers/austin_weather.csv'

# Create your views here.
def index(request):
    return render(request, 'base.html')


def problem1(request):
    df = pd.read_csv(csv_path)
    context = {
        'df' : df,
    }
    return render(request, 'problem1.html', context)


def problem2(request):
    df =  pd.read_csv(csv_path)
    df['Date'] = pd.to_datetime(df['Date'])
    
    plt.clf()

    # 그래프 사이즈 조절
    # figsize(가로길이, 세로길이)
    plt.figure(figsize=(10, 5))

    plt.plot(df['Date'], df['TempHighF'], label='High Temperature')
    plt.plot(df['Date'], df['TempAvgF'], label='Average Temperature')
    plt.plot(df['Date'], df['TempLowF'], label='Lower Temperature')

    plt.title("Temperature Variation")
    plt.ylabel('Temperature (Fahrenheit)')
    plt.xlabel('Date')

    plt.grid(True)

    # 범례 표시
    plt.legend(loc='lower center')

    # x 축 눈금 설정 : 월별로 표시
    plt.xticks()

    # 비어있는 버퍼를 생성
    buffer = BytesIO()

    # 버퍼에 그래프를 저장
    plt.savefig(buffer, format='png')

    # 버퍼의 내용을 base64(이진데이터 변환) 로 인코딩
    # 인코딩 후 디코딩을 진행해 우리가 사용할 수 있는 데이터로 변환
    image_base64 = base64.b64encode(buffer.getvalue()).decode('utf-8').replace('\n', '')

    # 버퍼를 닫아줌
    buffer.close()

    # 이미지를 웹 페이지에 표시하기 위해 URL 형식(주소 형식)으로 만들어진 문자열을 생성
    context = {
        'chart_image': f'data:image/png;base64,{image_base64}',
    }
    return render(request, 'problem2.html', context)


def problem3(request):
    df =  pd.read_csv(csv_path)
    df['Date'] = pd.to_datetime(df['Date'])
    
    plt.clf()

    # dataframe의 Date value를 년-월 형식으로 변환
    df['Date'] = df['Date'].dt.strftime('%Y-%m')

    # 월 별로 그룹화하여 평균 온도를 계산한 새로운 Dataframe 생성
    mean_dataframe = pd.DataFrame(df.groupby('Date')[['TempHighF', 'TempAvgF', 'TempLowF']].mean()).reset_index()


    # 그래프 사이즈 조절
    # figsize(가로길이, 세로길이)
    plt.figure(figsize=(10, 5))

    plt.plot(mean_dataframe['Date'], mean_dataframe['TempHighF'], label='High Temperature')
    plt.plot(mean_dataframe['Date'], mean_dataframe['TempAvgF'], label='Average Temperature')
    plt.plot(mean_dataframe['Date'], mean_dataframe['TempLowF'], label='Lower Temperature')

    plt.title("Temperature Variation")
    plt.ylabel('Temperature (Fahrenheit)')
    plt.xlabel('Date')

    plt.grid(True)

    # 범례 표시
    plt.legend(loc='lower right')

    # x 축 눈금 설정 : 월별로 표시
    month_label = list(mean_dataframe['Date'])
    plt.xticks([month_label[idx] for idx in range(1, len(mean_dataframe['Date']), 6)])

    # 비어있는 버퍼를 생성
    buffer = BytesIO()

    # 버퍼에 그래프를 저장
    plt.savefig(buffer, format='png')

    # 버퍼의 내용을 base64(이진데이터 변환) 로 인코딩
    # 인코딩 후 디코딩을 진행해 우리가 사용할 수 있는 데이터로 변환
    image_base64 = base64.b64encode(buffer.getvalue()).decode('utf-8').replace('\n', '')

    # 버퍼를 닫아줌
    buffer.close()

    # 이미지를 웹 페이지에 표시하기 위해 URL 형식(주소 형식)으로 만들어진 문자열을 생성
    context = {
        'chart_image': f'data:image/png;base64,{image_base64}',
    }
    return render(request, 'problem3.html', context)


def problem4(request):
    csv_path = 'weathers/austin_weather.csv'
    df = pd.read_csv(csv_path)

    # "Events" 열에서 쉼표로 구분된 값을 분할하여 새로운 열 생성
    df['Events'] = df['Events'].str.split(' , ')

    # 각 이벤트 카운트 계산
    event_counts = {
    'No_Events': len(df) - df['Events'].apply(lambda x: any(event in x for event in ['Rain', 'Thunderstorm', 'Fog', 'Snow'])).sum(),
    'Rain': df['Events'].apply(lambda x: 'Rain' in x).sum(),
    'Thunderstorm': df['Events'].apply(lambda x: 'Thunderstorm' in x).sum(),
    'Fog': df['Events'].apply(lambda x: 'Fog' in x).sum(),
    'Snow': df['Events'].apply(lambda x: 'Snow' in x).sum(),
    }

    # 이벤트별 히스토그램 그리기
    events = list(event_counts.keys())
    counts = list(event_counts.values())

    plt.clf()

    plt.bar(events, counts)
    plt.title("Events Counts")
    plt.ylabel('Count')
    plt.xlabel('Events')
    plt.grid(True)

    # 비어있는 버퍼를 생성
    buffer = BytesIO()

    # 버퍼에 그래프를 저장
    plt.savefig(buffer, format='png')

    # 버퍼의 내용을 base64로 인코딩
    image_base64 = base64.b64encode(buffer.getvalue()).decode('utf-8').replace('\n', '')

    # 버퍼를 닫아줌
    buffer.close()

    # 이미지를 웹 페이지에 표시하기 위해
    # URI 형식(주소 형식)으로 만들어진 문자열을 생성
    
    context = {
        # chart_image : 저장된 이미지의 경로
        'chart_image' : f'data:image/png; base64, {image_base64}',
    }
    return render(request, 'problem4.html', context)