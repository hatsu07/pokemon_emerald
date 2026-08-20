	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:269 LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe
	.globl gText_Rom_206803
gText_Rom_206803: @ 0x08206803
	.string "ひさしぶりに きて みたら 2かいにも\nえが かざって あって びっくり!\pいいなあ あたしの ポケモンも\nこんなふうに すてきに かいて ほしいな{EOS}"
	.if (. - gText_Rom_206803) > 0x4b
	.error "gText_Rom_206803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206803) < 0x4b
	.space 0x4b - (. - gText_Rom_206803)
	.endif
