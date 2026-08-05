	@ data/maps/SootopolisCity/scripts.inc:1399 SootopolisCity_Text_WhereDidLegendariesGo
	.globl gText_Rom_1E2D1F
gText_Rom_1E2D1F: @ 0x081E2D1F
	.string "グラードンと カイオーガ\nどこ いっちゃったんだろう……\pまた どこかで ひでりに したり\nおおあめ ふらせたり してるのかな?$"
	.if (. - gText_Rom_1E2D1F) > 0x41
	.error "gText_Rom_1E2D1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2D1F) < 0x41
	.space 0x41 - (. - gText_Rom_1E2D1F)
	.endif
