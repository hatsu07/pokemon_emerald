#!/usr/bin/env python3
from pathlib import Path
from PIL import Image
import argparse

def palette():
    p=[]
    for i in range(256):
        v=(i&0xF)*17
        p.extend((v,v,v))
    return p

def decode(data,width,height):
    img=Image.new("P",(width,height),0)
    img.putpalette(palette())
    tiles_x=width//8
    for ty in range(height//8):
        for tx in range(tiles_x):
            t=(ty*tiles_x+tx)*32
            for y in range(8):
                for x in range(4):
                    b=data[t+y*4+x]
                    px=tx*8+x*2
                    py=ty*8+y
                    img.putpixel((px,py),b&0xF)
                    img.putpixel((px+1,py),(b>>4)&0xF)
    return img

ap=argparse.ArgumentParser()
ap.add_argument("rom", nargs="?", default="baserom.gba")
ap.add_argument("-o","--output", default="icon.png")
ap.add_argument("--offset", type=lambda s:int(s,0), default=0xC30044)
args=ap.parse_args()

rom=Path(args.rom).read_bytes()
data=rom[args.offset:args.offset+0x400]
img=decode(data,32,64)
img.save(args.output)
print(args.output)
