	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:627 BattleFrontier_BattlePyramidLobby_Text_HereIsPrize
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22CC0C
gText_Rom_22CC0C: @ 0x0822CC0C
	.string "おまちしておりましたぞ!\pバトルピラミッド せいはの きねんとして\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - gText_Rom_22CC0C) != 0x38
	.error "gText_Rom_22CC0C must retain its original byte length"
	.endif
