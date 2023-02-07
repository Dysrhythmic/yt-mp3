from yt_dlp import YoutubeDL

URLS = ['https://www.youtube.com/watch?v=xtHOdKIDM9Y']

ydl_opts = {
    'format': 'm4a/bestaudio/best',
    'postprocessors': [{  
        'key': 'FFmpegExtractAudio',
        'preferredcodec': 'mp3',
    }]
}

with YoutubeDL(ydl_opts) as ydl:
    ydl.download(URLS)
