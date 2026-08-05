	@ asm/move_relearner.s:1128 sub_08160E70
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADAAF
gText_Rom_5ADAAF: @ 0x085ADAAF
	.string "{0xFD}{0x02}に　わざを　おぼえさせるのを\nあきらめますか？$"
	.if (. - gText_Rom_5ADAAF) != 0x1a
	.error "gText_Rom_5ADAAF must retain its original byte length"
	.endif
