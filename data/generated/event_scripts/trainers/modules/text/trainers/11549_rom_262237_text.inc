	@ data/text/trainers.inc:3398 Route134_Text_KelvinPostBattle
	.globl gText_Rom_262237
gText_Rom_262237: @ 0x08262237
	.string "このうえ なみのり まで できなかったら\nかえれないじゃ ないですか!\p……まあ ひんしでも なみのり できますけど\nきぶんてきに よろしくなくて{EOS}"
	.if (. - gText_Rom_262237) > 0x4a
	.error "gText_Rom_262237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262237) < 0x4a
	.space 0x4a - (. - gText_Rom_262237)
	.endif
