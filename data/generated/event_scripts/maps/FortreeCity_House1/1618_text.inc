	@ data/maps/FortreeCity_House1/scripts.inc:52 FortreeCity_House1_Text_YouWontTradeMe
	.globl gText_Rom_204314
gText_Rom_204314: @ 0x08204314
	.string "え こうかん しないの?\nこころの さけびを きいたくせに……{EOS}"
	.if (. - gText_Rom_204314) > 0x20
	.error "gText_Rom_204314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204314) < 0x20
	.space 0x20 - (. - gText_Rom_204314)
	.endif
