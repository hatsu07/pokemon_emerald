	@ data/text/trainers.inc:656 Route109_Text_AustinaPostBattle
	.globl gText_Rom_25B0BF
gText_Rom_25B0BF: @ 0x0825B0BF
	.string "あたしの うきわ\nオシャレだから てばなせないの{EOS}"
	.if (. - gText_Rom_25B0BF) > 0x19
	.error "gText_Rom_25B0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0BF) < 0x19
	.space 0x19 - (. - gText_Rom_25B0BF)
	.endif
