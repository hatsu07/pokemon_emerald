	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21EFA2
gText_Rom_21EFA2: @ 0x0821EFA2
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?"
	.byte EOS
	.if (. - gText_Rom_21EFA2) != 0x2f
	.error "gText_Rom_21EFA2 must retain its original byte length"
	.endif
	.globl gText_Rom_21EFC1
	.set gText_Rom_21EFC1, gText_Rom_21EFA2 + 0x1f
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_21EFD1
gText_Rom_21EFD1: @ 0x0821EFD1
	.string "カイナシティ ですね!"
	.byte EOS
	.if (. - gText_Rom_21EFD1) > 0xc
	.error "gText_Rom_21EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFD1) < 0xc
	.space 0xc - (. - gText_Rom_21EFD1)
	.endif
