	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:24 RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays
	.globl gText_Rom_20402B
gText_Rom_20402B: @ 0x0820402B
	.string "デボンもな むかしは\nちいさな ちいさな かいしゃ だったわい{EOS}"
	.if (. - gText_Rom_20402B) > 0x20
	.error "gText_Rom_20402B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20402B) < 0x20
	.space 0x20 - (. - gText_Rom_20402B)
	.endif
