	@ data/text/apprentice.inc:271 gText_ApprenticeWhatHeldItem2
	.globl gText_Rom_26ECD9
gText_Rom_26ECD9: @ 0x0826ECD9
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の ことなんだけど\pなにか もちものを もたせたいんだ!\nなにか いい もちもの おしえてください!"
	.byte EOS
	.if (. - gText_Rom_26ECD9) > 0x45
	.error "gText_Rom_26ECD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ECD9) < 0x45
	.space 0x45 - (. - gText_Rom_26ECD9)
	.endif
