	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:583 BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake
	.globl gText_Rom_22C9F4
gText_Rom_22C9F4: @ 0x0822C9F4
	.string "おおっ!\pポケモンに\nどうぐを もたせていますな……\pもうしわけ ありませんが\nピラミッドで てにいれた どうぐは\lもっていくことが できませんぞ!$"
	.if (. - gText_Rom_22C9F4) > 0x4b
	.error "gText_Rom_22C9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C9F4) < 0x4b
	.space 0x4b - (. - gText_Rom_22C9F4)
	.endif
