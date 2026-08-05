	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:296 MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt
	.globl gText_Rom_20D225
gText_Rom_20D225: @ 0x0820D225
	.string "かいがんを さんぽ していて\nこれを みつけたんだけど\lぼくは いらないから きみに あげる!$"
	.if (. - gText_Rom_20D225) > 0x30
	.error "gText_Rom_20D225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D225) < 0x30
	.space 0x30 - (. - gText_Rom_20D225)
	.endif
