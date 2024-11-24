let player;
let currentVideoId = null; // To track the currently playing video ID
let isPlaying = false; // To track playback state

// Initialize the YouTube API
function onYouTubeIframeAPIReady() {
  player = new YT.Player('youtubeVideo', {
    events: {
      'onReady': onPlayerReady,
      'onStateChange': onPlayerStateChange
    }
  });
}

// This function is triggered when the video player state changes
function onPlayerStateChange(event) {
  // Check if the player has stopped (STATE 0) or is playing (STATE 1)
  if (event.data === YT.PlayerState.PLAYING) {
    isPlaying = true;
  } else if (event.data === YT.PlayerState.PAUSED) {
    isPlaying = false;
  }
}

// Add event listeners once the player is ready
function onPlayerReady() {
  const videoLinks = document.querySelectorAll('.video-link'); // Select all video links

  videoLinks.forEach(link => {
    link.addEventListener('click', function (e) {
      e.preventDefault(); // Prevent default navigation behavior

      const videoUrl = this.getAttribute('href'); // Get the video URL from the href attribute
      const videoId = new URL(videoUrl).pathname.split('/').pop(); // Extract the video ID from the URL

      if (videoId === currentVideoId) {
        // Toggle playback for the currently loaded video
        if (isPlaying) {
          player.pauseVideo();
        } else {
          player.playVideo();
        }
      } else {
        // Load a new video and play it
        player.loadVideoById(videoId);
        currentVideoId = videoId; // Update the current video ID
        // Do not set isPlaying immediately, let onPlayerStateChange manage it
      }
    });
  });
}
