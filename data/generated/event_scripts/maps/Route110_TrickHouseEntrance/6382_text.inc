	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:766 Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt
	.globl gText_Rom_23D677
gText_Rom_23D677: @ 0x0823D677
	.string "あいことばが かいてある"
	.byte EOS
	.if (. - gText_Rom_23D677) > 0xd
	.error "gText_Rom_23D677 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D677) < 0xd
	.space 0xd - (. - gText_Rom_23D677)
	.endif
