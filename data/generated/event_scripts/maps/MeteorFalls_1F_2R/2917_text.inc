	@ data/maps/MeteorFalls_1F_2R/scripts.inc:113 MeteorFalls_1F_2R_Text_JohnNotEnoughMons (+2 aliases)
	.globl gText_Rom_2134E8
gText_Rom_2134E8: @ 0x082134E8
	.string "ゲン『おやおや\nわかい トレーナー じゃな!\pわしらと しょうぶ してくれるのなら\nポケモンを もっと つれてきなされ$"
	.if (. - gText_Rom_2134E8) > 0x3c
	.error "gText_Rom_2134E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2134E8) < 0x3c
	.space 0x3c - (. - gText_Rom_2134E8)
	.endif
