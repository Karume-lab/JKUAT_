document.addEventListener('DOMContentLoaded', () => {
	const submit = document.querySelector('#submit');
	const newTask = document.querySelector('#task');
	const tasksUl = document.querySelector('#tasks');
	submit.disabled = true;

	newTask.addEventListener('input', () => {
		if (newTask.value.length > 1) {
			submit.disabled = false;
		} else {
			submit.disabled = true;
		}
	});

	document.getElementsByTagName('form')[0].addEventListener('submit', (e) => {
		const newTaskLi = document.createElement('li');
		newTaskLi.innerText = newTask.value;
		tasksUl.append(newTaskLi);
		newTask.value = '';
		submit.disabled = true;
		e.preventDefault();
	});
});
