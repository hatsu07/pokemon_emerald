	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:77 LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist
	.globl gText_Rom_205A08
gText_Rom_205A08: @ 0x08205A08
	.string "おれ グラフィッカー!\nホウエンの ポケモンは おもしろいね$"
	.if (. - gText_Rom_205A08) > 0x1f
	.error "gText_Rom_205A08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A08) < 0x1f
	.space 0x1f - (. - gText_Rom_205A08)
	.endif
