	@ data/text/apprentice.inc:532 gText_ApprenticeMonFirstThanks8
	.globl gText_Rom_270791
gText_Rom_270791: @ 0x08270791
	.string "はあああ…… しあわせすぎる\n{PLAYER}さんに きめて もらうなんて!\lりょうかいですっ! わたし\l{STR_VAR_1}から いくで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_270791) > 0x5b
	.error "gText_Rom_270791 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270791) < 0x5b
	.space 0x5b - (. - gText_Rom_270791)
	.endif
