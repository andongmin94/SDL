from django import forms

# Model Fields : 데이터베이스 필드들을 파이썬 클래스화
# Form Fields : HTML Form Field(element) 들을 파이썬 클래스화
class ArticleForm(forms.Form):
    title = forms.CharField(max_length=10)
    content = forms.CharField()