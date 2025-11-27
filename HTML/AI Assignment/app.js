
// 1. Get references to HTML elements
const countElement = document.getElementById("count");
const incrementBtn = document.getElementById("incrementBtn");
const resetBtn = document.getElementById("resetBtn");

// 2. Application state
let count = 0;

// 3. Functions to update state & UI
function updateDisplay() {
  countElement.textContent = count;
}

function increment() {
  console.log("Before increment:", count);
  count = count + 1;
  console.log("After increment:", count);
  updateDisplay();
}

function reset() {
  console.log("Resetting counter");
  count = 0;
  updateDisplay();
}

// 4. Attach event listeners
incrementBtn.addEventListener("click", increment);
resetBtn.addEventListener("click", reset);

// Initial display
updateDisplay();
