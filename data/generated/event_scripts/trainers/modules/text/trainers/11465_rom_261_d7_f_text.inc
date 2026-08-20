	@ data/text/trainers.inc:3272 Route132_Text_PaxtonPostBattle
	.globl gText_Rom_261D7F
gText_Rom_261D7F: @ 0x08261D7F
	.string "ばあさんも わしを さがしてるじゃろ\nはよう みつけて やらんと{EOS}"
	.if (. - gText_Rom_261D7F) > 0x21
	.error "gText_Rom_261D7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261D7F) < 0x21
	.space 0x21 - (. - gText_Rom_261D7F)
	.endif
