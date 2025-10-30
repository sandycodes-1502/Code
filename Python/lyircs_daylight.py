import sys
import time

def print_lyrics():
    lyrics = [
        "But I know I can't resit it",
        "Oh I love it and I hate it at the same time",
        "You and I drink the poison from the same wine",
        "Oh I love it and I hate it at the same time",
        "Hiding all of our sins from the daylight",
        "From the daylight, Running from the daylight",
        "From the daylight, Running from the daylight",
        "Oh I love it and I hate it at the same time"
    ]

    delays = [0.6, 0.2, 0.1, 0.1, 0.1, 0.1, 0.1, 0]

    print("Daylight: \n")
    time.sleep(1.2)

    for i, line in enumerate(lyrics):
        for char in line:
            sys.stdout.write(char)
            sys.stdout.flush()
            time.sleep(0.075)
        print()
        time.sleep(delays[i])

print_lyrics()