	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:898 Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23F851
gText_Rom_23F851: @ 0x0823F851
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま てんさい」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_23F851) > 0x43
	.error "gText_Rom_23F851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F851) < 0x43
	.space 0x43 - (. - gText_Rom_23F851)
	.endif
