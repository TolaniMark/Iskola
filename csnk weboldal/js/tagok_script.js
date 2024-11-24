// Initialize slide indexes for both slideshows
let slideIndex1 = 1;
let slideIndex2 = 1;

// Show first slideshow
showSlides(slideIndex1, 1);

// Show second slideshow
showSlides(slideIndex2, 2);

// Next/previous controls for the first slideshow
function plusSlides1(n) {
  showSlides(slideIndex1 += n, 1);
}

// Next/previous controls for the second slideshow
function plusSlides2(n) {
  showSlides(slideIndex2 += n, 2);
}

// Thumbnail image controls for the first slideshow
function currentSlide1(n) {
  showSlides(slideIndex1 = n, 1);
}

// Thumbnail image controls for the second slideshow
function currentSlide2(n) {
  showSlides(slideIndex2 = n, 2);
}

// Show slides for the specified slideshow
function showSlides(n, slideshow) {
  let slides, dots;

  if (slideshow === 1) {
    slides = document.getElementsByClassName("mySlides1");
    dots = document.getElementsByClassName("demo1");
  } else {
    slides = document.getElementsByClassName("mySlides2");
    dots = document.getElementsByClassName("demo2");
  }

  if (n > slides.length) {
    if (slideshow === 1) {
      slideIndex1 = 1;
    } else {
      slideIndex2 = 1;
    }
  }
  if (n < 1) {
    if (slideshow === 1) {
      slideIndex1 = slides.length;
    } else {
      slideIndex2 = slides.length;
    }
  }

  // Hide all slides
  for (let i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";
  }

  // Remove "active" class from all dots
  for (let i = 0; i < dots.length; i++) {
    dots[i].className = dots[i].className.replace(" active", "");
  }

  // Show current slide and activate corresponding dot
  slides[slideshow === 1 ? slideIndex1 - 1 : slideIndex2 - 1].style.display = "block";
  dots[slideshow === 1 ? slideIndex1 - 1 : slideIndex2 - 1].className += " active";
}

// Automatic slideshow (optional)
function autoSlides() {
  plusSlides1(1);
  plusSlides2(1);
}

// Set interval for automatic slide change every 6 seconds (optional)
setInterval(autoSlides, 6000);
