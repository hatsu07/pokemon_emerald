	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:39 Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23DF53
gText_Rom_23DF53: @ 0x0823DF53
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま すてき」\p…… …… ……\pかぎの はずれる おとがした!"
	.byte EOS
	.if (. - gText_Rom_23DF53) > 0x42
	.error "gText_Rom_23DF53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DF53) < 0x42
	.space 0x42 - (. - gText_Rom_23DF53)
	.endif
