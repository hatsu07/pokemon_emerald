	@ data/text/trainers.inc:2600 Route124_Text_JennyIntro (+1 aliases)
	.globl gText_Rom_2601C6
gText_Rom_2601C6: @ 0x082601C6
	.string "こうして うみに うかんでいると\nポケモンたちが あそびに くるのよ!{EOS}"
	.if (. - gText_Rom_2601C6) > 0x24
	.error "gText_Rom_2601C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2601C6) < 0x24
	.space 0x24 - (. - gText_Rom_2601C6)
	.endif
