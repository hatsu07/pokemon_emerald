	@ data/text/trainers.inc:1991 Route119_Text_JacksonIntro (+1 aliases)
	.globl gText_Rom_25E8AC
gText_Rom_25E8AC: @ 0x0825E8AC
	.string "サバイバルに ひつような\nちしきと ぎじゅつを もつ もの!\lそれが ポケモンレンジャーさ!$"
	.if (. - gText_Rom_25E8AC) > 0x2f
	.error "gText_Rom_25E8AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E8AC) < 0x2f
	.space 0x2f - (. - gText_Rom_25E8AC)
	.endif
