	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:102 Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened
	.globl Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened
Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened: @ 0x0823E196
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま かしこい」\p…… …… ……\pかぎの はずれる おとがした!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened) > 0x43
	.error "Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened) < 0x43
	.space 0x43 - (. - Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened)
	.endif
	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:105 Route110_TrickHousePuzzle2_Text_TedIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle2_Text_TedIntro
Route110_TrickHousePuzzle2_Text_TedIntro: @ 0x0823E1D9
	.string "どの スイッチで\nどの あなが ふさがるんだ?"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle2_Text_TedIntro) > 0x18
	.error "Route110_TrickHousePuzzle2_Text_TedIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle2_Text_TedIntro) < 0x18
	.space 0x18 - (. - Route110_TrickHousePuzzle2_Text_TedIntro)
	.endif

	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:108 Route110_TrickHousePuzzle2_Text_TedDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle2_Text_TedDefeat
Route110_TrickHousePuzzle2_Text_TedDefeat: @ 0x0823E1F1
	.string "しょうぶ してたら\nよけい わかんなくなった!{EOS}"
	.if (. - Route110_TrickHousePuzzle2_Text_TedDefeat) > 0x18
	.error "Route110_TrickHousePuzzle2_Text_TedDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle2_Text_TedDefeat) < 0x18
	.space 0x18 - (. - Route110_TrickHousePuzzle2_Text_TedDefeat)
	.endif
