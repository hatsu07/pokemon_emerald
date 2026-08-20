	@ data/text/trainers.inc:2651 Route124_Text_RoyIntro (+1 aliases)
	.globl gText_Rom_26042D
gText_Rom_26042D: @ 0x0826042D
	.string "コウ『オレの ねえちゃん\nポケモン つよいぞ!\lまけて ないたり するなよ!{EOS}"
	.if (. - gText_Rom_26042D) > 0x27
	.error "gText_Rom_26042D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26042D) < 0x27
	.space 0x27 - (. - gText_Rom_26042D)
	.endif
