	@ data/text/trainers.inc:2219 Route120_Text_KeigoIntro (+1 aliases)
	.globl gText_Rom_25F287
gText_Rom_25F287: @ 0x0825F287
	.string "ポケモンの うごきを とりいれて\nあたらしい にんぽうを あみだすんだ!{EOS}"
	.if (. - gText_Rom_25F287) > 0x25
	.error "gText_Rom_25F287 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F287) < 0x25
	.space 0x25 - (. - gText_Rom_25F287)
	.endif
