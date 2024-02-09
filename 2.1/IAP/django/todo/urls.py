from django.urls import path
from . import views

app_name = "todo"
urlpatterns = [
    path("", views.index, name="todo"),
    path("/new-task", views.new_task, name="new_task"),
    path("/tasks-list", views.tasks_list, name="tasks_list"),
]
