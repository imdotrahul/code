const quizData = [
    {
      question: "Which of the following is NOT a type of multivariate data visualization?",
      options: ["Scatter plot", "Bar chart", "Heatmap", "Line graph"],
      answer: "Bar chart"
    },
    {
      question: "What is the purpose of a scatter plot?",
      options: [
        "Showing the distribution of a single variable",
        "Comparing two variables to identify relationships",
        "Displaying categorical data",
        "Showing proportions within a whole"
      ],
      answer: "Comparing two variables to identify relationships"
    },
    {
      question: "Which type of chart is best suited for showing changes over time?",
      options: ["Scatter plot", "Bar chart", "Line graph", "Pie chart"],
      answer: "Line graph"
    },
    {
      question: "What does the color intensity represent in a heatmap?",
      options: ["Time", "Frequency", "Magnitude", "Distance"],
      answer: "Magnitude"
    },
    {
      question: "Which of the following is NOT a common use of a pie chart?",
      options: [
        "Showing proportions within a whole",
        "Comparing the distribution of multiple variables",
        "Displaying categorical data",
        "Highlighting the largest category in a dataset"
      ],
      answer: "Comparing the distribution of multiple variables"
    },
    {
      question: "In a box plot, what does the box represent?",
      options: [
        "The range of the data",
        "The median and quartiles of the data",
        "The maximum and minimum values of the data",
        "The mean of the data"
      ],
      answer: "The median and quartiles of the data"
    },
    {
      question: "Which type of chart is best suited for comparing the distribution of a single variable across different categories?",
      options: ["Bar chart", "Scatter plot", "Line graph", "Box plot"],
      answer: "Box plot"
    },
    {
      question: "What does the size of the bubble represent in a bubble chart?",
      options: ["Frequency", "Time", "Magnitude", "Distance"],
      answer: "Magnitude"
    },
    {
      question: "What is the purpose of using color encoding in data visualization?",
      options: [
        "To make the visualization more aesthetically pleasing",
        "To represent a third variable",
        "To label different categories",
        "To show relationships between variables"
      ],
      answer: "To represent a third variable"
    },
    {
      question: "Which type of chart is best suited for comparing the frequency distribution of multiple variables?",
      options: ["Scatter plot", "Histogram", "Line graph", "Pie chart"],
      answer: "Histogram"
    },
    // Add more questions here...
  ];
  
  const quizContainer = document.querySelector('.container');
  const submitButton = document.createElement('button');
  submitButton.textContent = 'Submit';
  submitButton.classList.add('btn');
  quizContainer.appendChild(submitButton);
  
  let currentQuestion = 0;
  let score = 0;
  
  function displayQuestion() {
    const questionElement = document.createElement('div');
    questionElement.classList.add('question');
    questionElement.textContent = quizData[currentQuestion].question;
    quizContainer.insertBefore(questionElement, submitButton);
    
    const optionsContainer = document.createElement('div');
    optionsContainer.classList.add('options');
    quizData[currentQuestion].options.forEach((option, index) => {
      const optionElement = document.createElement('div');
      optionElement.classList.add('option');
      optionElement.textContent = option;
      optionElement.setAttribute('data-index', index);
      optionElement.addEventListener('click', selectAnswer);
      optionsContainer.appendChild(optionElement);
    });
    quizContainer.insertBefore(optionsContainer, submitButton);
  }
  
  function selectAnswer(event) {
    const selectedOption = event.target;
    const selectedIndex = selectedOption.getAttribute('data-index');
    const correctAnswer = quizData[currentQuestion].answer;
    
    if (selectedOption.textContent === correctAnswer) {
      selectedOption.classList.add('correct');
      score++;
    } else {
      selectedOption.classList.add('incorrect');
    }
  
    const options = document.querySelectorAll('.option');
    options.forEach(option => {
      option.removeEventListener('click', selectAnswer);
    });
  
    currentQuestion++;
  
    if (currentQuestion < quizData.length) {
      displayQuestion();
    } else {
      displayResult();
    }
  }
  
  function displayResult() {
    quizContainer.innerHTML = '';
    const resultElement = document.createElement('div');
    resultElement.classList.add('result');
    resultElement.innerHTML = `<h2>Quiz Result</h2>
                                <p>You scored ${score} out of ${quizData.length} questions correctly.</p>`;
    quizContainer.appendChild(resultElement);
  }
  
  displayQuestion();
  