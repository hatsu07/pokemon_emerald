	@ data/maps/Route120/scripts.inc:393 Route120_Text_StevenGiveDevonScope
	.globl gText_Rom_1EDF65
gText_Rom_1EDF65: @ 0x081EDF65
	.string "ダイゴ『なるほど\nきみの たたかいかた おもしろいね\pはじめて ムロで であった ときよりも\nポケモンも そだっているし……\pそうだね\nこの デボンスコープは きみに あげよう\pほかにも すがたを かくしている\nポケモンは いるかも しれないから$"
	.if (. - gText_Rom_1EDF65) > 0x7c
	.error "gText_Rom_1EDF65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDF65) < 0x7c
	.space 0x7c - (. - gText_Rom_1EDF65)
	.endif
