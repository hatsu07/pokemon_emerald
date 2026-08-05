	@ data/text/apprentice.inc:628 gText_ApprenticeMonThanks8
	.globl gText_Rom_271466
gText_Rom_271466: @ 0x08271466
	.string "うわぁぁ きめて もらっちゃったあ!\n{STR_VAR_1} ですねっ!\lがんばって そだてるで あります!\pでは また こんど\nいろいろと おしえて くださいね!$"
	.if (. - gText_Rom_271466) > 0x4a
	.error "gText_Rom_271466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271466) < 0x4a
	.space 0x4a - (. - gText_Rom_271466)
	.endif
