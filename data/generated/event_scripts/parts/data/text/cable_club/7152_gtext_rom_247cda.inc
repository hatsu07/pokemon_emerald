	@ data/text/cable_club.inc:38 gText_AwaitingLinkup
	.globl gText_Rom_247CDA
gText_Rom_247CDA: @ 0x08247CDA
	.string "つうしんかいしを まっています\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_247CDA) > 0x1e
	.error "gText_Rom_247CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247CDA) < 0x1e
	.space 0x1e - (. - gText_Rom_247CDA)
	.endif
