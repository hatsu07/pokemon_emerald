	@ data/maps/MossdeepCity_Gym/scripts.inc:489 MossdeepCity_Gym_Text_TateAndLizaDefeat (+1 aliases)
	.globl gText_Rom_20BF1C
gText_Rom_20BF1C: @ 0x0820BF1C
	.string "フウ『ぼっ ぼくたちの\nラン『コンビネーションが……!\pフウ『やぶれた からには しかたない\nラン『まけを みとめて これを あげるヨ!$"
	.if (. - gText_Rom_20BF1C) > 0x45
	.error "gText_Rom_20BF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BF1C) < 0x45
	.space 0x45 - (. - gText_Rom_20BF1C)
	.endif
