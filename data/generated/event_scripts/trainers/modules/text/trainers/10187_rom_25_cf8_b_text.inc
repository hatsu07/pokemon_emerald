	@ data/text/trainers.inc:1394 Route114_Text_IvyIntro (+1 aliases)
	.globl gText_Rom_25CF8B
gText_Rom_25CF8B: @ 0x0825CF8B
	.string "イヨ『あなた\nだれに ポケモン おそわったの?{EOS}"
	.if (. - gText_Rom_25CF8B) > 0x18
	.error "gText_Rom_25CF8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF8B) < 0x18
	.space 0x18 - (. - gText_Rom_25CF8B)
	.endif
