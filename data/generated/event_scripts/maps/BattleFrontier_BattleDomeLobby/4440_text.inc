	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:612 BattleFrontier_OutsideWest_Text_BattleDomeSign2
	.globl gText_Rom_227BC1
gText_Rom_227BC1: @ 0x08227BC1
	.string "ここは バトルドーム\nめざせ むてきの スーパースター!$"
	.if (. - gText_Rom_227BC1) > 0x1d
	.error "gText_Rom_227BC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227BC1) < 0x1d
	.space 0x1d - (. - gText_Rom_227BC1)
	.endif
