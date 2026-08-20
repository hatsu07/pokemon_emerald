	@ data/maps/Route110/scripts.inc:958 Route110_Text_ThereIsNoRecord
	.globl gText_Rom_1E9FF5
gText_Rom_1E9FF5: @ 0x081E9FF5
	.string "いままでの さいこう きろく……\p…… だれも ちょうせん していないのか\nなにも きろく されていない!{EOS}"
	.if (. - gText_Rom_1E9FF5) > 0x36
	.error "gText_Rom_1E9FF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9FF5) < 0x36
	.space 0x36 - (. - gText_Rom_1E9FF5)
	.endif
