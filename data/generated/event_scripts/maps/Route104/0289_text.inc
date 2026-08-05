	@ data/maps/Route104/scripts.inc:1150 Route104_Text_BrendanLetsBattle (+1 aliases)
	.globl gText_Rom_1DFA36
gText_Rom_1DFA36: @ 0x081DFA36
	.string "ユウキ『どうだい オレと ここで\nしょうぶ してみるか?$"
	.if (. - gText_Rom_1DFA36) > 0x1d
	.error "gText_Rom_1DFA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA36) < 0x1d
	.space 0x1d - (. - gText_Rom_1DFA36)
	.endif
