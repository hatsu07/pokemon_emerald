	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl gText_Rom_25B4E6
gText_Rom_25B4E6: @ 0x0825B4E6
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!$"
	.if (. - gText_Rom_25B4E6) > 0x20
	.error "gText_Rom_25B4E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B4E6) < 0x20
	.space 0x20 - (. - gText_Rom_25B4E6)
	.endif
