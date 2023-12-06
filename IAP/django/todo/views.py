from django.shortcuts import render, redirect
from django.urls import reverse
from . import models


# Create your views here.
def index(request):
    return render(request, "todo/index.html")


def new_task(request):
    if request.method == "POST":
        title = request.POST.get("title")
        description = request.POST.get("description")
        task = models.Task.objects.create(title=title, description=description)
        task.save()
        return redirect(reverse("todo:tasks_list"))

    return render(request, "todo/new-task.html")


def tasks_list(request):
    return render(request, "todo/tasks-list.html", {"tasks": models.Task.objects.all()})
