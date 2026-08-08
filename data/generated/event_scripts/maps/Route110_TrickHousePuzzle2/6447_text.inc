	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:102 Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23E196
gText_Rom_23E196: @ 0x0823E196
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま かしこい」\p…… …… ……\pかぎの はずれる おとがした!"
	.byte EOS
	.if (. - gText_Rom_23E196) > 0x43
	.error "gText_Rom_23E196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E196) < 0x43
	.space 0x43 - (. - gText_Rom_23E196)
	.endif
