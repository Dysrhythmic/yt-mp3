#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char opts[] = "yt-dlp -P \"/mnt/d/Audio/Music\" -x --audio-format mp3 -o \"%(title)s.%(ext)s\" ";
  char *command = (char*)malloc(strlen(opts) + strlen(argv[1]) + 1);
  strcpy(command, opts);
  strcat(command, argv[1]);
  system(command);
  free(command);
}
