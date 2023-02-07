#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char url[100];
  printf("Enter the URL: ");
  scanf("%s", url);

  char opts[] = "yt-dlp -P \"/mnt/d/Audio/Music\" -x --audio-format mp3 -o \"%(title)s.%(ext)s\" ";
  char *command = strcat(opts, url);

  system(command);
}
