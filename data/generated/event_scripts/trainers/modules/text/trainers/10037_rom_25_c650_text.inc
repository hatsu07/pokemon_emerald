	@ data/text/trainers.inc:1172 Route113_Text_DillonPostBattle
	.globl gText_Rom_25C650
gText_Rom_25C650: @ 0x0825C650
	.string "ごほ がへっ!\nはいが はいに はいった……\pうけなかった……\nさむい…… ブルブル……{EOS}"
	.if (. - gText_Rom_25C650) > 0x2d
	.error "gText_Rom_25C650 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C650) < 0x2d
	.space 0x2d - (. - gText_Rom_25C650)
	.endif
