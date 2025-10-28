import sys
import time

def print_shape_of_you_lyrics():
    lyrics = [
        "The club isn't the best place to find a lover",
        "So the bar is where I go",
        "Me and my friends at the table doing shots",
        "Drinking fast and then we talk slow",
        "You come over and start up a conversation with just me",
        "And trust me I'll give it a chance now",
        "Take my hand, stop, put Van the Man on the jukebox",
        "And then we start to dance, and now I'm singing like"
    ]   
    delays = [0.8, 0.6, 0.7, 0.7, 0.9, 0.8, 1.0, 1.2]
    print("Shape of You: \n")
    for line, delay in zip(lyrics, delays):
        print(line)
        time.sleep(delay)
    
    
if __name__ == "__main__":
    print_shape_of_you_lyrics()
    
    