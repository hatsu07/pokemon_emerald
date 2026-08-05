	@ data/maps/MtChimney/scripts.inc:705 MtChimney_Text_MagmasNameSimilar
	.globl gText_Rom_2156B5
gText_Rom_2156B5: @ 0x082156B5
	.string "オレたちは アクアだん!\pやつらは マグマだん!\pまぎらわしい なまえを つけやがって\nしゃくにさわる やつらだ!$"
	.if (. - gText_Rom_2156B5) > 0x3a
	.error "gText_Rom_2156B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2156B5) < 0x3a
	.space 0x3a - (. - gText_Rom_2156B5)
	.endif
