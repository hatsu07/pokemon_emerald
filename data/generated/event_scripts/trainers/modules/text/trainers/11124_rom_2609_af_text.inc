	@ data/text/trainers.inc:2768 Route125_Text_KimDefeat (+1 aliases)
	.globl gText_Rom_2609AF
gText_Rom_2609AF: @ 0x082609AF
	.string "マホ『かてると おもったのに$"
	.if (. - gText_Rom_2609AF) > 0xf
	.error "gText_Rom_2609AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2609AF) < 0xf
	.space 0xf - (. - gText_Rom_2609AF)
	.endif
