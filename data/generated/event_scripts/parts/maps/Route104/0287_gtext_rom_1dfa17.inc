	@ data/maps/Route104/scripts.inc:1146 Route104_Text_BrendanNoConfidence (+1 aliases)
	.globl gText_Rom_1DFA17
gText_Rom_1DFA17: @ 0x081DFA17
	.string "ユウキ『なんだよ\nもってる ポケモンに じしんが ないのか?$"
	.if (. - gText_Rom_1DFA17) > 0x1f
	.error "gText_Rom_1DFA17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFA17) < 0x1f
	.space 0x1f - (. - gText_Rom_1DFA17)
	.endif
