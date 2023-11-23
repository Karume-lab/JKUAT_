document.addEventListener('DOMContentLoaded', () => {
	const submit = document.querySelector('#submit');
	const newTask = document.querySelector('#task');
	const tasksUl = document.querySelector('#tasks');
	submit.disabled = true;

	newTask.addEventListener('change', () => {
		submit.disabled = false;
	});

	document.getElementsByTagName('form')[0].addEventListener('submit', (e) => {
		const newTaskLi = document.createElement('li');
		newTaskLi.innerText = newTask.value;
		tasksUl.append(newTaskLi);
		newTask.value = '';
		e.preventDefault();
	});
});
