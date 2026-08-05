	@ data/text/trainers.inc:2597 Route124_Text_RolandPostBattle
	.globl gText_Rom_260192
gText_Rom_260192: @ 0x08260192
	.string "からだが ひえてきた……\nながいこと みずの なかに いるからだ\pきみのように ポケモンに のりたいよ$"
	.if (. - gText_Rom_260192) > 0x34
	.error "gText_Rom_260192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260192) < 0x34
	.space 0x34 - (. - gText_Rom_260192)
	.endif
