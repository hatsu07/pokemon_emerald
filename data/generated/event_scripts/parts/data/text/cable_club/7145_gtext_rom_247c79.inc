	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_Rom_247C79
gText_Rom_247C79: @ 0x08247C79
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_247C79) > 0x1e
	.error "gText_Rom_247C79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247C79) < 0x1e
	.space 0x1e - (. - gText_Rom_247C79)
	.endif
