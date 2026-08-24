	.globl gText_Rom_5ADAAF

	@ asm/move_relearner.s:1128 sub_08160E70
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADAAF
gText_Rom_5ADAAF: @ 0x085ADAAF
	.string "{0xFD}{0x02}に　わざを　おぼえさせるのを\nあきらめますか？{EOS}"
	.if (. - gText_Rom_5ADAAF) != 0x1a
	.error "gText_Rom_5ADAAF must retain its original byte length"
	.endif
	.globl gText_Rom_5ADAC0
	.set gText_Rom_5ADAC0, gText_Rom_5ADAAF + 0x11
	.globl gText_MoveRelearnerWhichMoveToForget

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
