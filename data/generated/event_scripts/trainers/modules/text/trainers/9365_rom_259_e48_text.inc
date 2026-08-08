	@ data/text/trainers.inc:205 Route104_Text_IvanDefeat (+1 aliases)
	.globl gText_Rom_259E48
gText_Rom_259E48: @ 0x08259E48
	.string "けっこう つよいと おもってたんだけどな\nじぶんのこと…… がっかり……"
	.byte EOS
	.if (. - gText_Rom_259E48) > 0x25
	.error "gText_Rom_259E48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E48) < 0x25
	.space 0x25 - (. - gText_Rom_259E48)
	.endif
