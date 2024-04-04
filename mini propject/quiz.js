document.addEventListener('DOMContentLoaded', function() {
    const quizContainer = document.getElementById('quiz-container');
    const resultsContainer = document.getElementById('results-container');
    const submitButton = document.getElementById('submit-btn');

    let questions = []; // Array to hold quiz questions
    let currentQuestionIndex = 0;
    let score = 0;

    // Fetch quiz questions from JSON file
    fetch('quiz.json')
        .then(response => response.json())
        .then(data => {
            questions = data.questions;
            displayQuestion();
        });

    function displayQuestion() {
        if (currentQuestionIndex < questions.length) {
            const question = questions[currentQuestionIndex];

            const questionDiv = document.createElement('div');
            questionDiv.classList.add('question');

            const options = question.options.map((option, optionIndex) => {
                return `<div>
                            <input type="radio" name="question" value="${optionIndex}" id="option${optionIndex}">
                            <label for="option${optionIndex}">${option}</label>
                        </div>`;
            }).join('');

            questionDiv.innerHTML = `<div class="question">${currentQuestionIndex + 1}. ${question.question}</div>
                                     <div class="options">${options}</div>`;

            quizContainer.innerHTML = '';
            quizContainer.appendChild(questionDiv);
        } else {
            showResults();
        }
    }

    function showResults() {
        const totalQuestions = questions.length;
        const resultText = `You scored ${score} out of ${totalQuestions}`;
        resultsContainer.innerHTML = resultText;
        submitButton.style.display = 'none';
    }

    submitButton.addEventListener('click', function() {
        const selectedOption = document.querySelector('input[name="question"]:checked');
        if (selectedOption) {
            const answerIndex = parseInt(selectedOption.value);
            if (answerIndex === questions[currentQuestionIndex].answer) {
                score++;
            }
            currentQuestionIndex++;
            displayQuestion();
        }
    });
});
