from django.db import models
from django.utils.translation import gettext_lazy as _

# Create your models here.
class Task(models.Model):
    title = models.CharField(_("Title"), max_length=50)
    description = models.TextField(_("Description"))
    date_created = models.DateTimeField(_("Date Created"), auto_now=False, auto_now_add=True)

    def __str__(self) -> str:
        return self.title