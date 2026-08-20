	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:304 Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23EA05
gText_Rom_23EA05: @ 0x0823EA05
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あこがれ」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_23EA05) > 0x43
	.error "gText_Rom_23EA05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA05) < 0x43
	.space 0x43 - (. - gText_Rom_23EA05)
	.endif
