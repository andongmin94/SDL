from django.db import models

# Create your models here.
class Article(models.Model):
    title = models.CharField(max_length=10)
    content = models.TextField()
<<<<<<< HEAD
    image = models.ImageField(blank=True, upload_to='%Y/%m/%d/')
=======
    image = models.ImageField(blank=True)
>>>>>>> d09683326456766d5d9f3ccc0cfe3cd8ae8ea008
    created_at = models.DateTimeField(auto_now_add=True)
    updated_at = models.DateTimeField(auto_now=True)
