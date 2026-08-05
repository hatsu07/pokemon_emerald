	@ data/text/trainers.inc:899 Route110_Text_KalebPostBattle
	.globl gText_Rom_25BA4E
gText_Rom_25BA4E: @ 0x0825BA4E
	.string "おう よしよし\nよくやったよ かわいい おまえたち$"
	.if (. - gText_Rom_25BA4E) > 0x1a
	.error "gText_Rom_25BA4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BA4E) < 0x1a
	.space 0x1a - (. - gText_Rom_25BA4E)
	.endif
