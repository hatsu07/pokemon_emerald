	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:142 BattleFrontier_BattlePalaceCorridor_Text_BeginningToUnderstandNature
	.globl gText_Rom_22B104
gText_Rom_22B104: @ 0x0822B104
	.string "…… そろそろ ポケモンの せいかくを\nみきわめられる ように なってきたか?$"
	.if (. - gText_Rom_22B104) > 0x28
	.error "gText_Rom_22B104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B104) < 0x28
	.space 0x28 - (. - gText_Rom_22B104)
	.endif
