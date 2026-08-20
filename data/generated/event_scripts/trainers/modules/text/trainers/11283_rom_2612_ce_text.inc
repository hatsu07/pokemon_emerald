	@ data/text/trainers.inc:3005 Route128_Text_KatelynRegister
	.globl gText_Rom_2612CE
gText_Rom_2612CE: @ 0x082612CE
	.string "まあ せっかく だし\nまたいつか しょうぶを しましょうよ!{EOS}"
	.if (. - gText_Rom_2612CE) > 0x1f
	.error "gText_Rom_2612CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2612CE) < 0x1f
	.space 0x1f - (. - gText_Rom_2612CE)
	.endif
