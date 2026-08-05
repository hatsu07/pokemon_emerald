	@ data/text/trainers.inc:1259 Route113_Text_SophieIntro (+1 aliases)
	.globl gText_Rom_25C9D9
gText_Rom_25C9D9: @ 0x0825C9D9
	.string "あったかくて ねむく なっちゃう\nねむけ ざましに あいてを してよ!$"
	.if (. - gText_Rom_25C9D9) > 0x24
	.error "gText_Rom_25C9D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C9D9) < 0x24
	.space 0x24 - (. - gText_Rom_25C9D9)
	.endif
