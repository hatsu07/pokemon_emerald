	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:30 Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_2404BE
gText_Rom_2404BE: @ 0x082404BE
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あいしてる」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_2404BE) > 0x44
	.error "gText_Rom_2404BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2404BE) < 0x44
	.space 0x44 - (. - gText_Rom_2404BE)
	.endif
