	@ data/text/trainers.inc:3257 Route132_Text_JonathanIntro (+1 aliases)
	.globl gText_Rom_261D04
gText_Rom_261D04: @ 0x08261D04
	.string "さっき から へんな しせんを\nかんじると おもったら キミか?{EOS}"
	.if (. - gText_Rom_261D04) > 0x21
	.error "gText_Rom_261D04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261D04) < 0x21
	.space 0x21 - (. - gText_Rom_261D04)
	.endif
