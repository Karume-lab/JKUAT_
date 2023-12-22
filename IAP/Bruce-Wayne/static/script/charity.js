document.addEventListener("DOMContentLoaded", function () {
	const donateForm = document.getElementById("donate-form");

	donateForm.addEventListener("submit", function (event) {
		event.preventDefault();

		if (donateForm.checkValidity()) {

			const firstName = document.getElementById("firstname").value;
			const surname = document.getElementById("surname").value;
			const email = document.getElementById("email").value;
			const donationType = document.getElementById("donation").value;

			const donationSection = document.createElement("section");
			donationSection.innerHTML = `
                <h2>Thank you for your donation, ${firstName} ${surname}!</h2>
                <p>Email: ${email}</p>
                <p>Donation Type: ${donationType}</p>
            `;

			const mainContent = document.querySelector("main");
			mainContent.appendChild(donationSection);

			donateForm.reset();
		} else {

			console.error("Form is not valid");
		}
	});
});
