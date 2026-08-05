	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_Rom_5ADA45
gText_Rom_5ADA45: @ 0x085ADA45
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p$"
	.if (. - gText_Rom_5ADA45) > 0x22
	.error "gText_Rom_5ADA45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA45) < 0x22
	.space 0x22 - (. - gText_Rom_5ADA45)
	.endif
