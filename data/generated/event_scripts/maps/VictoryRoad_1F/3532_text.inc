	@ data/maps/VictoryRoad_1F/scripts.inc:142 VictoryRoad_1F_Text_EdgarDefeat (+1 aliases)
	.globl gText_Rom_2197BE
gText_Rom_2197BE: @ 0x082197BE
	.string "ここで おわったか……"
	.byte EOS
	.if (. - gText_Rom_2197BE) > 0xc
	.error "gText_Rom_2197BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197BE) < 0xc
	.space 0xc - (. - gText_Rom_2197BE)
	.endif
