	@ data/maps/MeteorFalls_1F_2R/scripts.inc:113 MeteorFalls_1F_2R_Text_JohnNotEnoughMons (+2 aliases)
	.globl gText_Rom_213350
gText_Rom_213350: @ 0x08213350
	.string "ゲン『おやおや\nわかい トレーナー じゃな!\pわしらと しょうぶ してくれるのなら\nポケモンを もっと つれてきなされ$"
	.if (. - gText_Rom_213350) > 0x3c
	.error "gText_Rom_213350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213350) < 0x3c
	.space 0x3c - (. - gText_Rom_213350)
	.endif
