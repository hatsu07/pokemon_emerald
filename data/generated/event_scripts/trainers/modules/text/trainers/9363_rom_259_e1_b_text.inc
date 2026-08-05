	@ data/text/trainers.inc:202 Route104_Text_IvanIntro (+1 aliases)
	.globl gText_Rom_259E1B
gText_Rom_259E1B: @ 0x08259E1B
	.string "みずポケモンの エキスパートとは\nなにを かくそう オレのこと!\p……え?\nしらないの?"
	.byte EOS
	.if (. - gText_Rom_259E1B) > 0x2d
	.error "gText_Rom_259E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E1B) < 0x2d
	.space 0x2d - (. - gText_Rom_259E1B)
	.endif
