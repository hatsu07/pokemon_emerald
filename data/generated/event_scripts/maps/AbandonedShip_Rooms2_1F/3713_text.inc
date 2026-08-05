	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:79 AbandonedShip_Rooms2_1F_Text_DanRematchIntro (+1 aliases)
	.globl gText_Rom_21B038
gText_Rom_21B038: @ 0x0821B038
	.string "フミ『ずっと おたから さがしていて\nポケモンも つよく なったんだよねー!\lちょっと あいて してみてよ"
	.byte EOS
	.if (. - gText_Rom_21B038) > 0x36
	.error "gText_Rom_21B038 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B038) < 0x36
	.space 0x36 - (. - gText_Rom_21B038)
	.endif
