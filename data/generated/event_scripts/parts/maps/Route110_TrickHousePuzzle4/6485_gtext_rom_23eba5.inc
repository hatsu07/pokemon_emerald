	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:30 Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23EBA5
gText_Rom_23EBA5: @ 0x0823EBA5
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま かっこいい」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_23EBA5) > 0x44
	.error "gText_Rom_23EBA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EBA5) < 0x44
	.space 0x44 - (. - gText_Rom_23EBA5)
	.endif
