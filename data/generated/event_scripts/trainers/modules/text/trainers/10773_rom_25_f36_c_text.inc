	@ data/text/trainers.inc:2243 Route120_Text_CalliePostBattle
	.globl gText_Rom_25F36C
gText_Rom_25F36C: @ 0x0825F36C
	.string "やっぱり しんか させようかな?\nこのままでも かわいい けど{EOS}"
	.if (. - gText_Rom_25F36C) > 0x20
	.error "gText_Rom_25F36C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F36C) < 0x20
	.space 0x20 - (. - gText_Rom_25F36C)
	.endif
