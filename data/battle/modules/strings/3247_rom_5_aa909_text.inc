	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_MoveRelearnerAndPoof
gText_MoveRelearnerAndPoof: @ 0x085AA909
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p{EOS}"
	.if (. - gText_MoveRelearnerAndPoof) > 0x22
	.error "gText_MoveRelearnerAndPoof may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerAndPoof) < 0x22
	.space 0x22 - (. - gText_MoveRelearnerAndPoof)
	.endif
