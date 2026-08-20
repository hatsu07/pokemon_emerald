	@ data/text/trainers.inc:2024 Route119_Text_CatherineRematchIntro (+1 aliases)
	.globl gText_Rom_25EA3D
gText_Rom_25EA3D: @ 0x0825EA3D
	.string "ポケモンと いっしょの ぼうけんは\nうまく いってるかしら?{EOS}"
	.if (. - gText_Rom_25EA3D) > 0x1f
	.error "gText_Rom_25EA3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA3D) < 0x1f
	.space 0x1f - (. - gText_Rom_25EA3D)
	.endif
