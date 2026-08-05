	@ data/maps/Route104/scripts.inc:1146 Route104_Text_BrendanNoConfidence (+1 aliases)
	.globl gText_Rom_1E80CD
gText_Rom_1E80CD: @ 0x081E80CD
	.string "ユウキ『なんだよ\nもってる ポケモンに じしんが ないのか?$"
	.if (. - gText_Rom_1E80CD) > 0x1f
	.error "gText_Rom_1E80CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E80CD) < 0x1f
	.space 0x1f - (. - gText_Rom_1E80CD)
	.endif
