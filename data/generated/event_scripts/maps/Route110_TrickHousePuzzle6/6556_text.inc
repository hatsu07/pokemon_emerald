	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:45 Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23FD7F
gText_Rom_23FD7F: @ 0x0823FD7F
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま いのち」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_23FD7F) > 0x42
	.error "gText_Rom_23FD7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FD7F) < 0x42
	.space 0x42 - (. - gText_Rom_23FD7F)
	.endif
