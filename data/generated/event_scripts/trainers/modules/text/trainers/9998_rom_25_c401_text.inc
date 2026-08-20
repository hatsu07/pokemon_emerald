	@ data/text/trainers.inc:1115 Route112_Text_TrentRematchDefeat (+1 aliases)
	.globl gText_Rom_25C401
gText_Rom_25C401: @ 0x0825C401
	.string "パワーで まけたか?{EOS}"
	.if (. - gText_Rom_25C401) > 0xb
	.error "gText_Rom_25C401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C401) < 0xb
	.space 0xb - (. - gText_Rom_25C401)
	.endif
