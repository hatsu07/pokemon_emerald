	@ data/maps/Route104/scripts.inc:1158 Route104_Text_BrendanDefeat (+2 aliases)
	.globl gText_Rom_1DFA75
gText_Rom_1DFA75: @ 0x081DFA75
	.string "へえ……\nなかなか やるじゃないか$"
	.if (. - gText_Rom_1DFA75) > 0x12
	.error "gText_Rom_1DFA75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA75) < 0x12
	.space 0x12 - (. - gText_Rom_1DFA75)
	.endif
