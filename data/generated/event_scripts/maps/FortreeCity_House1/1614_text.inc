	@ data/maps/FortreeCity_House1/scripts.inc:46 FortreeCity_House1_Text_MonYouTakeCare
	.globl gText_Rom_2042E3
gText_Rom_2042E3: @ 0x082042E3
	.string "おー やったー!\p{STR_VAR_1} よくきたなー!\n{STR_VAR_2} げんきで やれよー!$"
	.if (. - gText_Rom_2042E3) > 0x22
	.error "gText_Rom_2042E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2042E3) < 0x22
	.space 0x22 - (. - gText_Rom_2042E3)
	.endif
