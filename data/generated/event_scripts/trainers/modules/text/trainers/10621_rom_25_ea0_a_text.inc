	@ data/text/trainers.inc:2021 Route119_Text_CatherineRegister
	.globl gText_Rom_25EA0A
gText_Rom_25EA0A: @ 0x0825EA0A
	.string "トレーナーの ひつじゅひん ポケナビは\nちゃんと もってる?\pあっ もってるわね! とうろくしましょ$"
	.if (. - gText_Rom_25EA0A) > 0x33
	.error "gText_Rom_25EA0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA0A) < 0x33
	.space 0x33 - (. - gText_Rom_25EA0A)
	.endif
