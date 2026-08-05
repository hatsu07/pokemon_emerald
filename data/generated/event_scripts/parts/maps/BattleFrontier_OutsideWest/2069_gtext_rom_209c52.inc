	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_209C52
gText_Rom_209C52: @ 0x08209C52
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?$"
	.if (. - gText_Rom_209C52) != 0x2f
	.error "gText_Rom_209C52 must retain its original byte length"
	.endif
