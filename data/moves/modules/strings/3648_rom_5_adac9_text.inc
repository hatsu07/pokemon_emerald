	@ src/strings.c:1131 gText_MoveRelearnerWhichMoveToForget
	.globl gText_MoveRelearnerWhichMoveToForget
gText_MoveRelearnerWhichMoveToForget: @ 0x085ADAC9
	.string "どの わざを\nわすれさせたい?\p{EOS}"
	.if (. - gText_MoveRelearnerWhichMoveToForget) > 0x11
	.error "gText_MoveRelearnerWhichMoveToForget may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerWhichMoveToForget) < 0x11
	.space 0x11 - (. - gText_MoveRelearnerWhichMoveToForget)
	.endif
	@ analyzed canonical ROM range 0x085ADADA-0x085ADAF3
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x0000, 0x0000
	.2byte 0x0000, 0x4000, 0x0000, 0x0000, 0x0000
