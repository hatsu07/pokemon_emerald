	@ data/text/cable_club.inc:54 Text_LinkErrorPleaseReset
	.globl gText_Rom_247D67
gText_Rom_247D67: @ 0x08247D67
	.string "つうしんエラー です\nリセットして やりなおしてください$"
	.if (. - gText_Rom_247D67) > 0x1d
	.error "gText_Rom_247D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D67) < 0x1d
	.space 0x1d - (. - gText_Rom_247D67)
	.endif
