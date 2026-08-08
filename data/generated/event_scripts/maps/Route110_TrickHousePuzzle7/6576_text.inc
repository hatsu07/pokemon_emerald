	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:317 Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_24023E
gText_Rom_24023E: @ 0x0824023E
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま だきしめたい」\p…… …… ……\pかぎの はずれる おとがした!$"
	.if (. - gText_Rom_24023E) > 0x45
	.error "gText_Rom_24023E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24023E) < 0x45
	.space 0x45 - (. - gText_Rom_24023E)
	.endif
