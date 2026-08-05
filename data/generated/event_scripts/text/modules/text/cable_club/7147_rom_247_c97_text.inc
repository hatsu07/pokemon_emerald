	@ data/text/cable_club.inc:32 gText_ConfirmLinkWhenPlayersReady
	.globl gText_Rom_247C97
gText_Rom_247C97: @ 0x08247C97
	.string "そろったら Aボタンで すすむ\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_247C97) > 0x1e
	.error "gText_Rom_247C97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C97) < 0x1e
	.space 0x1e - (. - gText_Rom_247C97)
	.endif
