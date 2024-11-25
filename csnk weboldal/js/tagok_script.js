let slideIndex1 = 1;
let slideIndex2 = 1;

showSlides(slideIndex1, 1);

showSlides(slideIndex2, 2);

function plusSlides1(n) {
  showSlides(slideIndex1 += n, 1);
}

function plusSlides2(n) {
  showSlides(slideIndex2 += n, 2);
}

function currentSlide1(n) {
  showSlides(slideIndex1 = n, 1);
}

function currentSlide2(n) {
  showSlides(slideIndex2 = n, 2);
}

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

  for (let i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";
  }

  for (let i = 0; i < dots.length; i++) {
    dots[i].className = dots[i].className.replace(" active", "");
  }

  slides[slideshow === 1 ? slideIndex1 - 1 : slideIndex2 - 1].style.display = "block";
  dots[slideshow === 1 ? slideIndex1 - 1 : slideIndex2 - 1].className += " active";
}

function autoSlides() {
  plusSlides1(1);
  plusSlides2(1);
}

setInterval(autoSlides, 6000);
