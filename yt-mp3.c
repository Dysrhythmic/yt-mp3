#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char path[] = "/mnt/d/Audio/Music ";
  char opts[] = "yt-dlp -x --audio-format mp3 -o \"%(title)s.%(ext)s\" -P ";
  char *command = (char*)malloc(strlen(opts) + strlen(path) + strlen(argv[1]) + 1);
  strcpy(command, opts);
  strcat(command, path);
  strcat(command, argv[1]);
  system(command);
  free(command);
}
