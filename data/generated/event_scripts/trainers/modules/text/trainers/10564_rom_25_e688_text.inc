	@ data/text/trainers.inc:1937 Route119_Text_BrentIntro (+1 aliases)
	.globl gText_Rom_25E688
gText_Rom_25E688: @ 0x0825E688
	.string "ボクらは モノマネサークル!\nキミの うごきを マネするよ!{EOS}"
	.if (. - gText_Rom_25E688) > 0x1f
	.error "gText_Rom_25E688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E688) < 0x1f
	.space 0x1f - (. - gText_Rom_25E688)
	.endif
