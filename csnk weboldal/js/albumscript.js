let player;
let currentVideoId = null;
let isPlaying = false;

function onYouTubeIframeAPIReady() {
  player = new YT.Player('youtubeVideo', {
    events: {
      'onReady': onPlayerReady,
      'onStateChange': onPlayerStateChange
    }
  });
}

function onPlayerStateChange(event) {
  if (event.data === YT.PlayerState.PLAYING) {
    isPlaying = true;
  } else if (event.data === YT.PlayerState.PAUSED) {
    isPlaying = false;
  }
}

function onPlayerReady() {
  const videoLinks = document.querySelectorAll('.video-link');

  videoLinks.forEach(link => {
    link.addEventListener('click', function (e) {
      e.preventDefault();

      const videoUrl = this.getAttribute('href');
      const videoId = new URL(videoUrl).pathname.split('/').pop();

      if (videoId === currentVideoId) {

        if (isPlaying) {
          player.pauseVideo();
        } else {
          player.playVideo();
        }
      } else {

        player.loadVideoById(videoId);
        currentVideoId = videoId; 
      }
    });
  });
}
