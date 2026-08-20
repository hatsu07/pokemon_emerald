	@ data/maps/OldaleTown/scripts.inc:342 OldaleTown_Text_SavingMyProgress
	.globl gText_Rom_1E4A6E
gText_Rom_1E4A6E: @ 0x081E4A6E
	.string "ちょっと ひとやすみ したいから\nレポート かいてるの{EOS}"
	.if (. - gText_Rom_1E4A6E) > 0x1c
	.error "gText_Rom_1E4A6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4A6E) < 0x1c
	.space 0x1c - (. - gText_Rom_1E4A6E)
	.endif
