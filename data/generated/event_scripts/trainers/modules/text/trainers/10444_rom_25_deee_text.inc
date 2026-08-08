	@ data/text/trainers.inc:1763 Route117_Text_DerekIntro (+1 aliases)
	.globl gText_Rom_25DEEE
gText_Rom_25DEEE: @ 0x0825DEEE
	.string "むかしは むしとりしょうねん!\nいまは こんちゅうマニア!\pでも ポケモンを あいする きもちは\nずっと かわらないぜ!$"
	.if (. - gText_Rom_25DEEE) > 0x3d
	.error "gText_Rom_25DEEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEEE) < 0x3d
	.space 0x3d - (. - gText_Rom_25DEEE)
	.endif
