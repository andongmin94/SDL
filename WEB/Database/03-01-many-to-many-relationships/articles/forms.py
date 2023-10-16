from django import forms
from .models import Article, Comment


class ArticleForm(forms.ModelForm):
    class Meta:
        model = Article
<<<<<<< HEAD
        exclude = ('user',)
=======
        exclude = ('user', 'like_users',)
>>>>>>> 165534eb2eddaf0045cb065d7a008a0c724940fe


class CommentForm(forms.ModelForm):
    class Meta:
        model = Comment
        fields = ('content',)
