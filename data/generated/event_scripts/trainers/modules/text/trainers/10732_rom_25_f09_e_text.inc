	@ data/text/trainers.inc:2183 Route120_Text_JenniferIntro (+1 aliases)
	.globl gText_Rom_25F09E
gText_Rom_25F09E: @ 0x0825F09E
	.string "ポケモンには いろんな とくせいが ある\nそれを かんがえてこそ\lいちりゅうの トレーナーに なれるのよ!{EOS}"
	.if (. - gText_Rom_25F09E) > 0x36
	.error "gText_Rom_25F09E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F09E) < 0x36
	.space 0x36 - (. - gText_Rom_25F09E)
	.endif
