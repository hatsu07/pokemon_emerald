	@ data/maps/VictoryRoad_1F/scripts.inc:169 VictoryRoad_1F_Text_QuincyDefeat (+1 aliases)
	.globl gText_Rom_2198D0
gText_Rom_2198D0: @ 0x082198D0
	.string "うん いいだろう!"
	.byte EOS
	.if (. - gText_Rom_2198D0) > 0xa
	.error "gText_Rom_2198D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198D0) < 0xa
	.space 0xa - (. - gText_Rom_2198D0)
	.endif
