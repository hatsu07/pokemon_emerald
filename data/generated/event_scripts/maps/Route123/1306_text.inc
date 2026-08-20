	@ data/maps/Route123/scripts.inc:177 Route123_Text_YouLikeGrassMonsTooHaveThis
	.globl gText_Rom_1EE6E3
gText_Rom_1EE6E3: @ 0x081EE6E3
	.string "あら！？\pあなたも くさタイプの ポケモンが\nだいすき なのね！\pうれしいから これ あげちゃう！\nともだちの しるし よ！{EOS}"
	.if (. - gText_Rom_1EE6E3) > 0x3f
	.error "gText_Rom_1EE6E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE6E3) < 0x3f
	.space 0x3f - (. - gText_Rom_1EE6E3)
	.endif
