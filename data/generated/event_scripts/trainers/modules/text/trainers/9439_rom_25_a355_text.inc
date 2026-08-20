	@ data/text/trainers.inc:314 Route105_Text_LuisDefeated (+1 aliases)
	.globl gText_Rom_25A355
gText_Rom_25A355: @ 0x0825A355
	.string "ゴボゴボ……{EOS}"
	.if (. - gText_Rom_25A355) > 0x7
	.error "gText_Rom_25A355 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A355) < 0x7
	.space 0x7 - (. - gText_Rom_25A355)
	.endif
