	.globl gBallSpriteSheets
gBallSpriteSheets: @ 0x082FCE0C
	.incbin "baserom.gba", 0x2fce0c, 0x60

	.globl gBallSpritePalettes
gBallSpritePalettes: @ 0x082FCE6C
	.incbin "baserom.gba", 0x2fce6c, 0x60
