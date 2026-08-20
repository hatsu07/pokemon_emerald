	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:427 PlayersHouse_1F_Text_WhatColorDidTheySay
	.globl gText_Rom_1EFF49
gText_Rom_1EFF49: @ 0x081EFF49
	.string "ママ『ねえ ねえ {PLAYER}\nいまの ニュース\lなにいろの ポケモンって いってたの?{EOS}"
	.if (. - gText_Rom_1EFF49) > 0x29
	.error "gText_Rom_1EFF49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFF49) < 0x29
	.space 0x29 - (. - gText_Rom_1EFF49)
	.endif
