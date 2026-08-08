	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:739 Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23D4DC
gText_Rom_23D4DC: @ 0x0823D4DC
	.string "さて こんどの しかけは\nあんなことや こんなことを……\pうふふ われながら\nむずかしいぞ… むふふ"
	.byte EOS
	.if (. - gText_Rom_23D4DC) != 0x33
	.error "gText_Rom_23D4DC must retain its original byte length"
	.endif
